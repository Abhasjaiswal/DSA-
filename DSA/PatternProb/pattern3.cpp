#include<iostream>

using namespace std;

void pattern3(){
  for (int i =0; i<5; i++){
    for (int j=0; j<i; j++){
      cout << j << " ";
    }
    cout << endl;
  }
}

int main(){
  pattern3();
}
