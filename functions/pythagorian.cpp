#include<iostream>
using namespace std;

void pyth(int a, int b, int c)
{
    int a2=a*a;
    int b2=b*b;
    int c2=c*c;
    if(a2==b2+c2||b2==a2+c2||c2==a2+b2)
    {
        cout<<"Pythagorean triplet";
    }
    else{
        cout<<"Not a triplet";
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    pyth(a,b,c);
}