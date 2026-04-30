#include<iostream>
#include<vector>
using namespace std;

// Brute Force TC = O(n2)
vector<int> pairsum(vector<int> arr, int target) {
  vector<int> ans;
  int n = arr.size();
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (arr[i] + arr[j] == target) {
        ans.push_back(arr[i]);
        ans.push_back(arr[j]);
      }
    }
  }
  return ans;
}

// Optimized Algorithm TC = O(n)
// Note: Array must be sorted!
vector<int> pairSumOptim(vector<int> arr, int target) {
  vector<int> ans;
  int n = arr.size(), i=0, j=n-1;

  while (i < j) {
  int sum=arr[i]+arr[j];
    if (target < sum) {
      j--;
    } else if (target > sum) {
      i++;
    } else {
      ans.push_back(arr[i]);
      ans.push_back(arr[j]);
      return ans;
    }
  }
  return ans;
}

void show(vector<int> arr) {
  for (int val : arr) {
    cout<<val<<" ";
  }
  cout<<endl;
}

int main() {
  vector<int> arr = {2, 7, 11, 15};
  int target = 9;

  vector<int> ans1= pairsum(arr, target);
  show(ans1);
  vector<int> ans2 = pairSumOptim(arr, target);
  show(ans2);

  return 0;
}