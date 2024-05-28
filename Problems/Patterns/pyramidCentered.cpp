#include<iostream>
using namespace std;

void printRepeat(int g, char c){
  for(int i=0;i<g;++i){
    cout<<c;
  }
}
int calcToPrint(int i){
    return 1+2*(i-1);

}


void PyramidCentered(int num){
  int gapCounter=num-1;
  for(int i=1;i<num+1;++i){
    printRepeat(gapCounter,' ');
    printRepeat(calcToPrint(i),'*');
    printRepeat(gapCounter,' ');
    cout<<endl;
    gapCounter--;
  }
  cout<<endl;
  
}


int main(){
  int n;

  cout<<"Enter a number 'n' : ";
  cin >> n;
  cout<<endl;
  
  PyramidCentered(n);

}
