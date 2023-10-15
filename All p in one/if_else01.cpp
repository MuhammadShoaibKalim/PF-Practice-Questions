#include<iostream>
using namespace std;
int main()
{

    int a;
    int b;

    cout<<"Enter two number from user :";
    cin>>a>>b;

    if(a%2==0 && b%2==0)
    {
        cout<<a<<" "<<b<<"are even.";
    }
     else if(a%2==0)
     {
       cout<<a<<"is an even number.";
     }
     else if(b%2==0)
     {
        cout<<b<<"is even.";
     }
     else{
        cout<<"Not given number are even.";
     }

     return 0;
}