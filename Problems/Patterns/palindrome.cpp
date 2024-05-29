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

void printPalindrome(int n,int iter_no){
  if(n==1){
    cout<<1;
  }
  else{
    int p=iter_no;
    bool passed1=false;
    for(int i=0;i<n;++i){
      if(!passed1){
        if(p==1){
          cout<<1;
          passed1=true;
        }
        else{
          cout<<p;
          p--;
        }
      }
      else{
        p++;
        cout<<p;
      }
    }
  }

}


void Palindrome(int num){
  int gapCounter=num-1;
  for(int i=1;i<=num;++i){
    printRepeat(gapCounter,' ');
    printPalindrome(calcToPrint(i),i);
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
  
  Palindrome(n);

  return 0;


}
