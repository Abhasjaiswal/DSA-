#include <cmath>
#include <iostream>
using namespace std;
bool checkArmstrong(int n) {
    int sum = 0;
    int duplicate = n;
    int digits = 0;
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    while (n > 0) {
        int lastDigit = n % 10;
        sum += pow(lastDigit, digits); 
        n /= 10;
    }
    if(sum==duplicate){
      return true;
    }
    else{
      return false;
    }

}

int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  bool result = checkArmstrong(n);
  cout<<result;

}
