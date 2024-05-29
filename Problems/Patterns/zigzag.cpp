#include<iostream>
using namespace std;




void zigZag(int n){
  for(int i=1;i<=3;++i){
    for(int j=1;j<=n;++j){
      if((i+j)%4==0 || (i==2 && j%4==0)){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
}

int main () {
  int n;
  cout<<"Enter a number 'n': ";
  cin>>n;
  cout<<endl;

  zigZag(n);
  return 0;
}
