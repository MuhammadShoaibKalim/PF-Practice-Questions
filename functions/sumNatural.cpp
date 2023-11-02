#include<iostream>
using namespace std;

int sumOfNatural(int n);

int main()
{

  int num;
  cout<<"Enter the number :";
  cin>>num;

  int summ=sumOfNatural(num);
cout<<"The sum of natural is :"<<summ;
      return 0;
}

int sumOfNatural(int n)
{
  int sum=0;
  if(n>0)
  {
    for(int i=0; i<=n;i++)
    {   
        sum  +=i;
    }
  }
  return sum;

}
