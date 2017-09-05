#include <iostream>
using namespace std;
int main(){
  float temp,result;
  cout<<"Enter Temperature in Fahreneit:";
  cin>>temp;
  result=(0.55)*(temp-32);
  cout<<"Temperature in Celsius:"<<result<<"\n";
  return 0;
}

