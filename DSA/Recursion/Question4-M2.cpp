// Method 2 - Print the sum of first N numbers using function (return)

#include <iostream>

using namespace std;

int printSum(int n) {
  if (n == 0) {
    return 0;
  }
  return n + printSum(n - 1);
}

int main() {
  int N;
  cin >> N;
  int result = printSum(N);
  cout << result;
  return 0;
}
