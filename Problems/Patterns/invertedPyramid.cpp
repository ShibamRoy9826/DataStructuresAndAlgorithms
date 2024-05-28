#include<iostream>
using namespace std;


void printTimes(int n){
  for(int i=0;i<n;++i){
    cout<<"*";
  }
}


void invertedPyramid(int num){
  for(int i=num;i>0;--i){
    printTimes(i);
    cout<<endl;
  }
}


int main(){
  int n;

  cout<<"Enter a number 'n' : ";
  cin >> n;
  cout<<endl;
  
  invertedPyramid(n);

}
