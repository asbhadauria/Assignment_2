#include <iostream>
#include <cmath>
using namespace std;
int main(){
  float num,index;
  cout<<"Enter Base:";
  cin>>num;
  cout<<"Enter Index:";
  cin>>index;
  cout<<num<<" raised to "<<index<<" equals "<<pow(num,index);
  return 0;
}                
