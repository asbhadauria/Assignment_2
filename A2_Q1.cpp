#include <iostream>
using namespace std;
int main(){
int len;
cout<<"Enter Length in Centimeters:";
cin>>len;
cout<<"Entered Length in Meters:"<<(0.01*len)<<" cms"<<"\n";
cout<<"Entered length in Kilometers:"<<(0.00001*len)<<" kms"<<"\n";
return 0;
}
