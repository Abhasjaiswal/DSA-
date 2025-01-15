// Problem - Print the sum of first N numbers using recursion

#include <iostream>

using namespace std;

void printSum(int i, int sum){
  if(i<1){
    cout<<sum<<" ";
  return;
  }

  printSum(i-1, sum+i);
}

int main(){
  int N;
  cin>>N;
  printSum(N,0);
  return 0;
}
