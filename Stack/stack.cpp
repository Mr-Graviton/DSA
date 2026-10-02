#include <iostream>
using namespace std;

class Stack {
  int* stack;
  int max_size;
  int top = -1;

  public:
    Stack(int n): stack(nullptr), max_size(n) {
      if (n<=0) {
        cout<<"Invalid Stack Size!"<<endl;
      }
      stack = new int[max_size];
    }

    ~Stack() { delete[] stack; }

    void push(int val) { // Time Complexity O(1)
      if (top==max_size-1) {
        cout<<"Stack Overflow!"<<endl;
        return;
      }
      stack[++top] = val;
    }

    void pop() { // T.C. O(1)
      if (top == -1) {
        cout<<"Stack Underflow!"<<endl;
        return;
      }
      top--;
    }

    void peek() { // T.C. O(1)
      if (top == -1) {
        cout<<"Empty Stack"<<endl;
        return;
      }
      cout<<"Topmost value = "<<stack[top]<<endl;
    }
};

int main() {
  Stack s1(5);
  s1.push(10);
  s1.push(20);
  s1.push(30);
  s1.push(40);
  s1.push(50);
  s1.push(60);
  s1.pop();
  s1.pop();
  s1.peek();

  return 0;
}