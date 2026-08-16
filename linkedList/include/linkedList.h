#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int value);
};

class List {
  Node* head;
  Node* tail;
  inline static int count = 0;

  static void rise();

  static void fall();

  public: 
    List();

    // Push Front
    void pushFront(int val);

    // Push Back
    void pushBack(int val);

    // Insert
    void insert(int val, int pos);

    // Pop Front
    void popFront();

    // Pop Back
    void popBack();

    // Reverse the linked list
    void reverse();

    // Show list
    void print();
};

#endif