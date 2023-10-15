// #include<iostream>
// using namespace std;
// int main()
// {

// int number;
// int sum=0;


// cout<<"Enter a number :";
// cin>>number;

// while(number>0)
// {
//     sum +=number%10; 
//     number=number/10;

// }
// cout<<"The sum of digit is :"<<sum;

//   return 0;
// }


#include<iostream>
using namespace std;
int main()
{

int number;
int sum=0;


cout<<"Enter a number :";
cin>>number;

for(; number>0; number/=10)
{
    sum +=number%10; 
    
}
cout<<"The sum of digit is :"<<sum;
   
  return 0;
}