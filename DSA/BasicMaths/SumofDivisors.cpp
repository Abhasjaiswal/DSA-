#include<iostream>

using namespace std;

int sumOfDivisors(int n) {
    int totalSum = 0;

    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        totalSum += sum;
    }

    return totalSum;
}

int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  cout<<sumOfDivisors(n)<<endl;
  return 0;
}
