#include<iostream>
using namespace std;


void invertedNumberedPyramid(int n){
  int counter=1;
  for(int i=n;i>0;--i){
    for(int j=0;j<i;++j){
      cout<<counter;
      counter++;
    }
    cout<<endl;
    counter=1;
  }
}



int main(){
  int n;
  cout<<"Enter a number 'n': ";
  cin>>n;
  cout<<endl;

  invertedNumberedPyramid(n);
  return 0;
}
