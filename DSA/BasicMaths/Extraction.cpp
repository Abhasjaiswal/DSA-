#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

vector<int> ExtractDigits(int n) {
  vector<int> digits;
  while (n > 0) {
    int lastDigit = n % 10;
    digits.push_back(lastDigit);
    n = n / 10;
  }
  reverse(digits.begin(), digits.end());
  return digits; 
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  
  vector<int> digits = ExtractDigits(n);
  
  for (int i = 0; i < digits.size(); i++) {
    cout << digits[i] << " ";
  }
  return 0;
}

