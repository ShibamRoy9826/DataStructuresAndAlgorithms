#include<iostream>
using namespace std;

void printTimes(int r){
  for(int i=0;i<r;++i){
    cout<<"*";
  }
}
void hollowRectangle(int rows,int cols){
  for(int i=0;i<cols;++i){
    if(i==0 || i==cols-1 ){
      printTimes(rows);
      cout<<endl;
    }
    else{
      for(int j=0;j<rows;++j){
        if(j==0 || j==rows-1){
          cout<<"*";
        }
        else{
          cout<<" ";
        }
      }
      cout<<endl;
    }


  }
}

int main(){
  int row;
  int col;

  cout<<"No. Of rows: ";
  cin >> row;
  cout<<endl;

  cout<<"No. of cols: ";
  cin>> col;
  cout<<endl;

  hollowRectangle(row,col);
  

}
