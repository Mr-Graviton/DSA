#include<iostream>
using namespace std;

double power(double x, int n) {
  double ans=1.0;
  if (n<0) {
    n = -n;
    x = (double)1/x;
  }
  while (n>0) { 
    if (n%2==1) {
      ans*=x;
    }
    x*=x;
    n/=2;
  }
  return ans;
}

long binary(int number) {
  double x = number;
  long binary=0;
  int i=1;
  while ((int)x > 0) {
    binary += (int)x%2*i;
    i*=10;
    x/=2;
  }
  return binary;
}

int main() {
  double x;
  int n;
  cout<<"Enter number, and power: ";
  cin>>x>>n;
  cout<<x<<"^"<<n<<" = "<<power(x, n)<<endl;
  return 0;
}