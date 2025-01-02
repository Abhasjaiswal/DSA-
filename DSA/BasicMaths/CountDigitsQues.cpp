#include<iostream>

using namespace std;

int countDigits(int n) {
	int duplicate = n;
	int count = 0;

	while (n > 0) {
		int lastDigit = n % 10;
		if (lastDigit != 0 && duplicate % lastDigit == 0) {
			count++;
		}
		n = n / 10;
	}
	return count;
}

int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int answer =countDigits(n);
  cout << answer;

}
