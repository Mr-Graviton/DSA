#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSort(vector<int> arr) {
  int n = arr.size();
  for(int i=0; i<n-1; i++) {
    int smallestIndex = i;
    for(int j=i+1; j<n; j++) {
      if(arr[smallestIndex] > arr[j]) {
        smallestIndex = j;
      }
    }
    swap(arr[i], arr[smallestIndex]);
  }

  return arr;
}


int main() {
  vector<int> arr = {8, 2, 10, 4, 6};
  vector<int> res = selectionSort(arr);
  for(int i=0; i<res.size(); i++) {
    cout<<res[i]<<" ";
  }
  return 0;
}