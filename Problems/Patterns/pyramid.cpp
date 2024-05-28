#include<iostream>
using namespace std;


void printTimes(int n){
  for(int i=0;i<n;++i){
    cout<<"*";
  }
}


void Pyramid(int num){
  for(int i=1;i<num+1;++i){
    printTimes(i);
    cout<<endl;
  }
}


int main(){
  int n;

  cout<<"Enter a number 'n' : ";
  cin >> n;
  cout<<endl;
  
  Pyramid(n);

}
