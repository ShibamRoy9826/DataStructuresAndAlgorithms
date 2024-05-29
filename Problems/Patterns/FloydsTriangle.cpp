#include<iostream>
#include<string>
using namespace std;


void FloydsTriangle(int num){
  int counter=1;
  for(int i=0;i<=num;++i){
    for(int j=0;j<i;++j){
      cout<<counter;
      counter++;
    }
    cout<<endl;
  }
}

int main(){
  int n;

  cout<<"Enter a number 'n' : ";
  cin >> n;
  cout<<endl;
  
  FloydsTriangle(n);
  return 0;

}
