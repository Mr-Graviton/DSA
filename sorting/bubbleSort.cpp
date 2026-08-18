#include <iostream>
#include <vector>
using namespace std;

// Time complexity O(n2)
vector<int> bubbleSort(vector<int> arr) {
  int n = arr.size();
  bool isSwap = false;
  for(int i=0; i<n; i++) {
    for(int j=0; j<n-i-1; j++) {
      if (arr[j]>arr[j+1]) { 
        swap(arr[j], arr[j+1]);
        isSwap = true;
      }
    }
    if (!isSwap) return arr; // optimization
  }

  return arr;
}

int main() {
  vector<int> arr = {8, 2, 10, 4, 6};
  vector<int> res = bubbleSort(arr);
  for(int i=0; i<res.size(); i++) {
    cout<<res[i]<<" ";
  }
  return 0;
}