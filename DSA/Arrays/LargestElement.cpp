#include<iostream>

using namespace std;

int LargestElement(int arr[], int n){
  int Largest = arr[0];
  for( int i=0; i<n; i++){
    if (arr[i] > Largest){
      Largest = arr[i];
    }
  }
  return Largest;
}

int main(){
  int arr[] = {62 , 34, 12, 23, 67, 45, 98, 23, 12, 34};
  int n = sizeof(arr)/sizeof(arr[0]);
   int Element = LargestElement(arr, n);
  cout<<Element;
  return 0;
}
