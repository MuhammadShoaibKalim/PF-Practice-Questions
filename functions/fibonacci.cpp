#include<iostream>
using namespace std;
void fib(int n)
{
    int t1=0;
    int t2=1;
    int nextTerm;
for(int i=1;i<n; i++)
{
    cout<<t1<<endl;    //0
    nextTerm=t1+t2;    //1
    
    t1=t2;              // 0
    t2=nextTerm;        //0
}
return;

}
int main()
{
      int n;
      cout<<"Enter your number :";
      cin>>n;
    fib(n);
    return 0;
}
