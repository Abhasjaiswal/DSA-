#include<iostream>

using namespace std;

void pattern5(int n){
  for(int i=1; i<=n; i++){
    for(int j=0; j<n-i+1; j++){
      cout << "*";
    }
    cout << endl;
}
}

void pattern6(int n){
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i+1; j++){
      cout << j << " ";
    }
    cout << endl;
}
}
int main(){
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;

  pattern5(n);
  pattern6(n);

}


