#include<iostream>
using namespace std;

int findn(int n){
  if(n==0)
    return 0;
  if(n==1)
    return 3;
  else
    return 2*findn(n-1)+5;
}

int main(){
  for(int i=0;i<6;i++){
    cout<<findn(i)<<endl;
  }
return 0;
}
