#include<iostream>
using namespace std;
int main()
{
    int start_number=1;
    int sum=0;

    int n;
    cout<<"Enter the number at limit :";
    cin>>n;

  for(int i=0;i<=n; i++)
  {
    sum +=i;
  }
  cout<<"The sum of natural number from 1 to n :"<<sum;


    return 0;
}