#include<iostream>
using namespace std;


void printTimes(int n,char c){
  for(int i=0;i<n;++i){
    cout<<c;
  }
}


void Pyramid(int num){
  int gapCounter=num-1;
  for(int i=1;i<=num;++i){
    printTimes(gapCounter,' ');
    printTimes(i,'*');
    cout<<endl;
    gapCounter--;
  }
}


int main(){
  int n;

  cout<<"Enter a number 'n' : ";
  cin >> n;
  cout<<endl;
  
  Pyramid(n);
  return 0;

}
