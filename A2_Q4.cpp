#include <iostream>
using namespace std;
int main(){
  int days,yrs,mnth,drem;
  cout<<"Enter Days:";
  cin>>days;
  yrs=days/365; 
  mnth=(days-(365*yrs))/30;
  drem=(days-(365*yrs)-(mnth*30));
  cout<<"Equivalent Conversion:"<<yrs<<" Years "<<mnth<<" Months and "<<drem<<" days"<<"\n";
  return 0;
}                
