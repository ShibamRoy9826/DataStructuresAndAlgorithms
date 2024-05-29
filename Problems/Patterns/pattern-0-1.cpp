#include<iostream>
using namespace std;


void pattern(int n){
  int a=1;
  for(int i=0;i<=n;++i){
    for(int j=0;j<i;++j){
      if(a==1){
        cout<<1;
        a=0;
      }
      else{
        cout<<0;
        a=1;
      }
      
    }
    cout<<endl;
  }
}



int main(){
  int n;
  cout<<"Enter a number 'n': ";
  cin>>n;
  cout<<endl;

  pattern(n);
  return 0;

}
