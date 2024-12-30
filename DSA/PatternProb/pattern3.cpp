// Question 1: Write a program to print the following pattern:
// 0
// 0 1
// 0 1 2
// 0 1 2 3
// 0 1 2 3 4
// 0 1 2 3 4 5
#include<iostream>

using namespace std;

void pattern3(){
  for (int i =0; i<=5; i++){
    for (int j=0; j<=i; j++){
      cout << j << " ";
    }
    cout << endl;
  }
}

// Question 2: Write a program to print the following pattern:
// 0
// 1 1
// 2 2 2
// 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5 5
void pattern4(){
  for (int i =0; i<=5; i++){
    for (int j=0; j<=i; j++){
      cout << i << " ";
    }
    cout << endl;
  }
}

int main(){
  pattern3();
  pattern4();
}
