// Problem - Print N to 1 using recursion

#include <iostream>

using namespace std;

void printNo(int i , int N){
  if(i<1) return;

  cout<<i<<" ";
  printNo(i-1, N);
}

int main(){
  int N;
  cin>>N;
  printNo(N,N);
  return 0;
}
