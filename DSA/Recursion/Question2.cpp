#include <iostream>

using namespace std;

void printGfg(int N){
  if(N==0) return;

  printGfg(N-1);
  cout<<"GFG" << " "; 
}

int main(){
  int N;
  cin>>N;
  printGfg(N);
  return 0;
} 
