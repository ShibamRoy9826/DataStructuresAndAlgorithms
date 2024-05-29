#include<iostream>
using namespace std;


void printTimes(int n, char c){
  for(int i=0;i<n;++i){
    cout<<c;
  }
}


void butterflyPattern(int n){

  int cols=2*n;
  for(int i=1;i<=n;++i){
    printTimes(i,'*');
    printTimes(cols-(2*(i)),' ');
    printTimes(i,'*');
    cout<<endl;
  }
  for(int j=n;j>=0;--j){
    printTimes(j,'*');
    printTimes(cols-(2*(j)),' ');
    printTimes(j,'*');
    cout<<endl;
  }
  
}




int main(){
  int n;

  cout<<"Enter butterfly wing size : ";
  cin >> n;
  cout<<endl;
  
  butterflyPattern(n);

  return 0;

}

