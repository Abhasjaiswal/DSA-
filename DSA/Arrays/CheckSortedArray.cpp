#include<iostream>

using namespace std;

int checkSortedArray(int arr[],int n){
  for(int i=0; i<n; i++){
    if(arr[i] >= arr[i-1]){
      
    }
    else{
      return false;
    }
  }
  return true;
}

int main()
{
  int arr[] = {21,1, 2, 3, 4, 5, 6, 7, 8, 9};
  int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(arr)/sizeof(arr[0]);
  int n2 = sizeof(arr2)/sizeof(arr2[0]);
  bool result = checkSortedArray(arr, n);
  bool result2 = checkSortedArray(arr2, n2);
  cout<<result;
  cout<<result2;
  cout<<endl;
  return 0;
}
