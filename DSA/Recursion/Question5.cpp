#include<iostream>

using namespace std;  

int printSeriesSum(int n) {
  if (n == 0) {
    return 0;
  }
  return n*n*n + printSeriesSum(n - 1);
}

int main(){
  int N;
  cin>>N;
  int result = printSeriesSum(N);
  cout<<result;
  return 0;
}
