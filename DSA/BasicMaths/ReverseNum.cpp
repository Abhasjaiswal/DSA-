#include<iostream>

using namespace std;

int ReverseNum(int n){
  int reverse = 0;
  while(n>0){
    int lastDigit = n%10;
    reverse = reverse*10 + lastDigit;
    n = n/10;
  }
  return reverse;
}

int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  cout<<ReverseNum(n);
}
