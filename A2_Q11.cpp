#include <iostream>
using namespace std;
int main(){
  float pr,r,t,in;
  cout<<"Enter Principal:";
  cin>>pr;
  cout<<"Enter Rate:";
  cin>>r;
  cout<<"Enter Time:";
  cin>>t;
  in=(pr*r*t)/100;
  cout<<"Simple Interest="<<in<<"\n";
  return 0;
}

