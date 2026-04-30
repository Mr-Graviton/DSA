#include<iostream>
#include<limits>
using namespace std;

int main() {
  int n = 5;
  int arr[5] = {1, -2, 3, -4, 5};

  int maxSum = numeric_limits<int>::min();
  int currentSum = 0;
  
  for (int st=0; st<n; st++) {
    currentSum+=arr[st];
    if (currentSum > maxSum) {
      maxSum = currentSum;
    }

    if (currentSum<0) {
      currentSum = 0;
    }
  }
  cout<<maxSum<<endl;
  return 0;
}