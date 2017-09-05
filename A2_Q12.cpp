#include <iostream>
#include <cmath>
using namespace std;
int main(){
float pr,r,t,in;
cout<<"Enter Principal:";
cin>>pr;
cout<<"Enter Rate:";
cin>>r;
cout<<"Enter Time:";
cin>>t;
in=(pr*(pow((1+(r/100)),t))-pr);
cout<<"Compound Interest="<<in<<"\n";
return 0;
}


