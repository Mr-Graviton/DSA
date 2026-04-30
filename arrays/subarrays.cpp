#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n;
  cout<<"Enter size of array: ";
  cin>>n;
  vector<int> arr;
  for (int i=1; i<=n; i++) {
    arr.push_back(i);
  }

  for (int st=0; st<n; st++) {
    for (int end=st; end<n; end++){
      for (int i=st; i<=end; i++) {
        cout<<arr[i];
      }
      cout<<" ";
    }
    cout<<endl;
  }
} 