
#include<iostream>
using namespace std;

int CountDigits(int n){
  int count = 0;
  while(n>0){
    int lastDigit = n%10;
    count++;
    n = n/10;
  }
  return count;
}

int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  cout<<CountDigits(n);
}
