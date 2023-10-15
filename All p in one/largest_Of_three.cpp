#include<iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"Enter three values here for a, b, and  c :";
    cin>>a>>b>>c;
  
     if(a>b && a>c)
     {
     cout<<"The largest numbe is a :"<<a;
     }
     else if(b>a && b>c )
     {
     cout<<"The largest value is b :"<<b;
     }
     else if(c>a && c>b )
     {
        cout<<"The largest value is c :"<<c;
     }
      else{
        cout<<"Not every value is is greater but eqaul may be.";
      }
 
    return 0;
}




