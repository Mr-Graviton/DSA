#include "../include/linkedList.h"

// Node Class
Node::Node(int value) {
  data = value;
}


// List Class
void List::rise() {
  count++;
}

void List::fall() {
  count--;
}

List::List() {
  head = tail = NULL;
}

void List::pushFront(int val) {
  Node* newNode = new Node(val);
  if (head == NULL) {
    head = tail = newNode;
  } else {
    newNode->next = head;
    head = newNode;
  }
  rise();
}

void List::pushBack(int val) {
  Node* newNode = new Node(val);
  if (head == NULL) {
    head = newNode;
  } else {
    tail->next = newNode;
    tail = newNode;
  }
  rise();
}

void List::insert(int val, int pos) {
  if (pos<1) {
    cout<<"Invalid position!"<<endl;
    return;
  } else if (pos==1) {
    pushFront(val);
    return;
  } else if (count==pos){
    pushBack(val);
    return;
  } else if (pos>1 & pos<count) {
    Node* newNode = new Node(val);
    Node* ptr = head;
    int curr_pos = 1;
    while(ptr != NULL) {
      if (curr_pos == pos) break;
      curr_pos++;
      ptr = ptr->next;
    }
    newNode->next = ptr->next;
    ptr->next = newNode;
    rise();
  } else {
    cout<<"Insert failed: Invalid position"<<endl;
    return;
  }
}

void List::popFront() {
  if (head == NULL) {
    cout<<"Underflow!"<<endl;
    return;
  } else {;
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }
  fall();
}

void List::popBack() {
  if (head == NULL) {
    cout<<"Underflow!";
    return;
  } else {
    Node* temp = head;
    while (temp->next != tail) {
      temp = temp->next;
    }
    temp->next = NULL;
    delete tail;
    tail = temp;
  }
  fall();
}

void List::print() {
  Node* temp = head;
  while (temp != NULL) {
    cout<<temp->data<<" "<<"-> ";
    temp = temp->next;
  }
  cout<<"NULL"<<endl;
  cout<<"Node count = "<<count<<endl;
}