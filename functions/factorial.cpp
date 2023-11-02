#include<iostream>
using namespace std;
int  isFactorial(int a )
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact *=i;
    }
    return fact;
}

int main()
{


int n;
cout<<"Enter the number :";
cin>>n;

int ans=isFactorial(n);
cout<<"The output is :"<<ans;
return 0;
}