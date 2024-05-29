#include<iostream>
using namespace std;

void printTimes(int n,char c){
  for(int i=0;i<n;++i){
    cout<<c;
  }
}

void rhombus(int n){
  int gap=n-1;
  for(int i=0;i<n;++i){
    printTimes(gap,' ');
    printTimes(n,'*');
    gap--;
    cout<<endl;
  }
}



int main(){
  int n;
  cout<<"Enter a number 'n': ";
  cin>>n;
  cout<<endl;

  rhombus(n);
  return 0;
}
