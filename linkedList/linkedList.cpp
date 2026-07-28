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
    }

    // Pop Front
    void popFront() {
      if (head == NULL) {
        delete head;
      } else {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
      }
    }

    // Pop Back
    void popBack() {
      if (head == NULL) {
        cout<<"Linked List is empty!";
      } else {
        Node* temp = head;
        while (temp->next != tail) {
          temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
      }
    }

    // Show list
    void print() {
      Node* temp = head;
      while (temp != NULL) {
        cout<<temp->data<<" "<<"-> ";
        temp = temp->next;
      }
      cout<<"NULL"<<endl;
    }
};

int main() {
  List l;
  l.pushFront(1);
  l.pushFront(2);
  l.pushFront(3);
  l.pushFront(4);
  l.pushFront(5);
  l.pushFront(6);
  l.pushBack(0);
  l.pushBack(29);
  l.pushBack(88);
  l.print();
  return 0;
}