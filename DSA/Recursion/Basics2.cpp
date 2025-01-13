#include<iostream>

using namespace std;

int cnt =1; 

void print(){
  if (cnt==10)
    return;
  cout<< cnt << " "<<endl;
  cnt++;

  print();
}

int main(){
  print();
  return 0;
}
