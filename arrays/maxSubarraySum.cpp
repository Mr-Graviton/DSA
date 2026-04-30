#include<iostream>
#include<limits>
using namespace std;

int main() {
  int n = 5;
  int arr[5] = {1, -2, 3, -4, 5};

  int maxSum = numeric_limits<int>::min();
  cout<<maxSum;

  for (int st=0; st<n; st++) {
    int currentSum = 0;
    for (int end=st; end<=n; end++) {
      currentSum+=arr[end];
      maxSum = max(currentSum, maxSum);
    }
  }

  cout<<"Max subarray sum = "<<maxSum<<endl;
  return 0;
}