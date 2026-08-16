#include <iostream>
using namespace std;

long long fact(int n) {
  if (n==0) {
    return 1;
  } else {
    return n*fact(n-1);
  }
}

int main() {
  int n;
  cout<<"Enter number: "; cin>>n;
  cout<<n<<"! = "<<fact(n)<<endl;
  return 0;
}