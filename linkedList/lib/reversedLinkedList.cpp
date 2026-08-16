#include "../include/linkedList.h"

void List::reverse() {
  Node* prev = NULL;
  Node* cur = head;
  Node* nxt = NULL;
  
  while(cur != NULL) {
    nxt = cur->next;
    head = cur;
    cur->next = prev;
    prev = cur;
    cur = nxt;
  }
}