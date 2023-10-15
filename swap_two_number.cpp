#include<iostream>
using namespace std;
int main()
{
 //using temp variable

 int a=100;
 int b=120;

//  int temp=a;
//  a=b;
//  b=temp;
//  cout<<" The value of a :"<<a<<endl;
//   cout<<" The value of b :"<<b;
 


//Not using temp variable.

a=a+b; //100+120=220
b=a-b; //220-120=100

a=a-b; //220-100=120
cout<<"After swaping the value of a :"<<a<<endl;
cout<<"After swaping the value of  b :"<<b;

return 0;
}