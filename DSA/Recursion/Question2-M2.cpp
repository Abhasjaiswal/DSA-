// Another method to print a name N times 

#include<iostream>

using namespace std;

void printName(int i, int N){
  if(i>N) return;
  cout<<"GFG"<<" ";
  printName(i+1, N);
}

int main(){
  int N;
  cin>>N;
  printName(1, N);
  return 0;
}
