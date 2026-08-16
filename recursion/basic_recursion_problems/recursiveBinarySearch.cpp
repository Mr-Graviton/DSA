#include <iostream>
#include <vector>
using namespace std;

// Array is required to be sorted!
int binarySearch(vector<int> arr, int st, int end, int target) {
  if (st<=end) {
    int mid = st+(end-st)/2;
    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] <= target) {
      return binarySearch(arr, mid+1, end, target);
    } else {
      return binarySearch(arr, st, mid-1, target);
    }
  }

  return -1;
}


int main() {
  vector<int> arr = {-3, 0, 2, 5, 8, 13};
  cout<<binarySearch(arr, 0, arr.size()-1, 5)<<endl;
  return 0;
}