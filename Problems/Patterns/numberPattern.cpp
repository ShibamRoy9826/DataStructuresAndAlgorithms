#include<iostream>
using namespace std;

void printRepeat(int g, char c){
  for(int i=0;i<g;++i){
    cout<<c;
  }
}

void printNumbers(int n){
  for(int i=1;i<=n;++i){
    if(i!=n){
      cout<<i<<" ";
    }
    else{
      cout<<i;
    }
    }
}
int calcToPrint(int i){
    return 1+2*(i-1);

}


void numberPattern(int num){
  int gapCounter=num-1;
  for(int i=1;i<=num;++i){
    printRepeat(gapCounter,' ');
    //printNumbers(calcToPrint(i));
    printNumbers(i);
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
  
  numberPattern(n);
  return 0;

}
