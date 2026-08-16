#include "./include/linkedList.h"

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
  l.reverse();
  l.print();
  return 0;
}