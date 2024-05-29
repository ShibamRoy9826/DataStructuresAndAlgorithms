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


void star(int num){
  int gapCounter=num-1;
  for(int i=1;i<=num;++i){
    printRepeat(gapCounter,' ');
    printRepeat(calcToPrint(i),'*');
    printRepeat(gapCounter,' ');
    cout<<endl;
    gapCounter--;
  }
  gapCounter=0;
  for(int j=num;j>0;--j){
    printRepeat(gapCounter,' ');
    printRepeat(calcToPrint(j),'*');
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
  
  star(n);
  return 0;
}
