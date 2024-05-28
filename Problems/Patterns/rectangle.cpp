#include<iostream>
using namespace std;

int main(){
  int rows;
  int cols;

  cout<<"No. Of rows: ";
  cin>> rows;
  cout<<endl;

  cout<<"No. of columns: ";
  cin>> cols;
  cout<<endl;
  

  for (int i=0;i<cols; ++i){
    for (int j=0;j<rows; ++j){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
