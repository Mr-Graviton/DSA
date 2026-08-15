#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int value) {
      data = value;
    }
};

class List {
  Node* head;
  Node* tail;
  inline static int count = 0;

  static void rise() {
    count++;
  }

  static void fall() {
    count--;
  }

  public: 
    List() {
      head = tail = NULL;
    }

    // Push Front
    void pushFront(int val) {
      Node* newNode = new Node(val);
      if (head == NULL) {
        head = tail = newNode;
      } else {
        newNode->next = head;
        head = newNode;
      }
      rise();
    }

    // Push Back
    void pushBack(int val) {
      Node* newNode = new Node(val);
      if (head == NULL) {
        head = newNode;
      } else {
        tail->next = newNode;
        tail = newNode;
      }
      rise();
    }

    // Insert
    void insert(int val, int pos) {
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

    // Pop Front
    void popFront() {
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

    // Pop Back
    void popBack() {
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

    // Show list
    void print() {
      Node* temp = head;
      while (temp != NULL) {
        cout<<temp->data<<" "<<"-> ";
        temp = temp->next;
      }
      cout<<"NULL"<<endl;
      cout<<"Node count = "<<count<<endl;
    }
};

int main() {
  List l;
  l.pushFront(1);
  l.pushFront(2);
  l.pushFront(3);
  l.pushFront(4);
  l.pushBack(0);
  l.pushBack(29);
  l.pushBack(88);
  l.insert(1729, 4);
  l.insert(94, 3);
  l.popFront();
  l.popBack();
  l.popBack();
  l.insert(55, 1);
  l.insert(99, 100);
  l.insert(99, 7);
  l.insert(99, 8);
  l.print();
  return 0;
}