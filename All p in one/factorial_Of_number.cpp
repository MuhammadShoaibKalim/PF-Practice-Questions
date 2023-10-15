// #include<iostream>
// using namespace std;

// int main()
// {
//     int number;
//      int fact=1;
   
//     cout<<"Enter the number :";
//     cin>>number;

//     while(number>0)
//     {
//          fact *=number;
//          number=number-1;
//     }
//     cout<<"The factorial of given number :"<<fact;
    
//  return 0;
// }  

#include<iostream>
using namespace std;

int main()
{
    int number;
     int fact=1;
   
    cout<<"Enter the number :";
    cin>>number;

    for(;number>0;number=number-1)
    {
         fact *=number;
    }
    cout<<"The factorial of given number :"<<fact;
    
 return 0;
}  