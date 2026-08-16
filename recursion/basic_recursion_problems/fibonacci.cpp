#include <iostream>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34 . . . 
int fibonacci(int n) {
  if (n==0 || n==1) {
    return n;
  } else {
    return fibonacci(n-1) + fibonacci(n-2);
  }
}

int main() {
  int n;
  cout<<"Enter nth term: "; cin>>n;
  cout<<n<<"th term = "<<fibonacci(n)<<endl;
  return 0;
}