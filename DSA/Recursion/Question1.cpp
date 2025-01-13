// Print numbers from 1 to n without the help of loops. You only need to complete the function printNos() that takes n as a parameter and prints the number from 1 to n recursively.

#include<iostream>

using namespace std;

void printNos(int n){
  if(n==0) return; 

  printNos(n-1);
  cout<<n<<" ";
}

int main(){
  int n;
  cin>>n;
  printNos(n);
  return 0;
}
