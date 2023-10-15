// #include<iostream>
// using namespace std;

// int main()
// {
//     int number;
//     int product=1;
//     int sum=0;
//     int digit;

//     cout<<"Enter the number :";
//     cin>>number;

//     while(number>0)
//     {
//      digit=number%10 ;

//     if(digit%2==0)
//     {
//       sum +=digit;
//     }  

//    else
//    {
//     product *=digit;
//     }
//       number=number/10;
//     } 
    
//     cout<<"The sum of even  number :"<<sum<<endl;
//     cout<<"The sum of odd  number :"<<product;
    
    
//     return 0;
// }


#include<iostream>
using namespace std;

int main()
{
    int number;
    int product=1;
    int sum=0;
    int digit;

    cout<<"Enter the number :";
    cin>>number;

for(;number>0; number=number/10)
    {
        digit=number%10;
    if(digit%2==0)
    {
      sum +=digit;
    }  

   else
   {
    product *=digit;
    }
      
    } 
    
    cout<<"The sum of even  number :"<<sum<<endl;
    cout<<"The sum of odd  number :"<<product;
    
    
    return 0;
}