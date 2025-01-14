#include<iostream>

using namespace std;

void printNo(int N){

  if (N==0) return;
  cout<<N<<" ";
  printNo(N-1);
}

int main(){
  int N;
  cin>>N;
  printNo(N);
  return 0;
}
