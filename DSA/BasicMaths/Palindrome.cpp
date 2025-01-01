#include<iostream>

using namespace std;

void checkPalindrome(int n){
  int reverse = 0;
  int duplicate = n;

  while(n>0){
    int lastDigit = n%10;
    reverse = reverse*10+ lastDigit;
    n = n/10;
  }
  if(reverse==duplicate){
    cout<<"Palindrome";
  }
  else{
    cout<<"Not Palindrome";
    
}
}

int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  checkPalindrome(n);
}

