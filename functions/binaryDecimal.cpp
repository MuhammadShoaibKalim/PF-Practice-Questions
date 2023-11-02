#include<bts/stdc.h>
using namespace std;

int binaryDec(int n)
{
    int x=1;
    int ans=0;
    while(n>0)
    {  
                       //  02                  02
      int y=n%10;    //  101%10=1             10%2=0
      ans +=x*y;     // 0+=1*1=1              0*1=0 
      x *=2;        //  1*=2=2                1*=2=2
      n /=10;      //    101/10=10.1=10       10/10=1
    }
     return ans;
}
int main()
{
    
    int n;
    cout<<"Enter your number :";
    cin>>n;    //101
    cout<<"Your bunary conversion is :"<<binaryDec(n);
     return 0;
}