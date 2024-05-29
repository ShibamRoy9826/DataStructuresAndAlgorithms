#include<iostream>
using namespace std;

void printRepeat(int g, char c){
  for(int i=0;i<g;++i){
    cout<<c;
  }
}
int calcToPrint(int gapC, int total){
     return (1+2*total) - gapC*2;

}

void PyramidCentered(int num){
  int gapCounter=0;
  for(int i=1;i<=num+1;++i){
    printRepeat(gapCounter,' ');
    printRepeat(calcToPrint(gapCounter,num),'*');
    printRepeat(gapCounter,' ');
    cout<<endl;
    gapCounter++;
  }
  cout<<endl;
  
}

int main(){
  int n;

  cout<<"Enter a number 'n' : ";
  cin >> n;
  cout<<endl;
  
  PyramidCentered(n-1);
  return 0;

}
