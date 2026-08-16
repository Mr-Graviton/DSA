#include "../include/linkedList.h"

// Slow and Fast pointer method [SC = O(1) TC = O(n)]
void List::middle() {
  Node* slow = head;
  Node* fast = head;
  while(fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
  }
  cout<<"Middle node: "<<slow->data<<endl;
}