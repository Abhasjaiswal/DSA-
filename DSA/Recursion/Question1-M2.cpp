// Another method to print numbers from 1 to N

#include<iostream>

using namespace std;

void printNo(int i , int N){
  if(i>N) return;
  cout<<i<<" ";
  printNo(i+1, N);
}

int main(){
  int N;
  cin>>N;
  printNo(1, N);
  return 0;
}
