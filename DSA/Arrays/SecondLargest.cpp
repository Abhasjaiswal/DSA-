#include <iostream>
using namespace std;
int secondLargest(int arr[],int n){
  int largest = arr[0];
  int secondLargest = -1;

  for(int i=0; i<n; i++){
    if(arr[i] > largest){
      secondLargest = largest;
      largest = arr[i];
    }
    else if (arr[i] <largest && arr[i] > secondLargest){
      secondLargest = arr[i];
    }
  }
  return secondLargest;
}

int main(){
  int arr[] = {12, 35, 1, 10, 34, 1};
  int n = sizeof(arr)/sizeof(arr[0]);
  int result= secondLargest(arr, n);
  cout<<result;

  return 0;
}
