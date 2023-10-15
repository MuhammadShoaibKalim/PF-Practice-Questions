// #include<iostream>
// using namespace std;
// int main()
// {
//   int number;
//   int product=1;
//   cout<<"Enter a number :";
//    cin>>number;

//   while(number>0)
//   {
//     product *=number%10;
//     number=number/10;

//   }
//   cout<<"The product of given number is  :"<<product;

//     return 0;
// }


#include<iostream>
using namespace std;

int main()
{
    int number;
    int product = 1;
    cout << "Enter a number: ";
    cin >> number;

    for (; number > 0; number=number/10)
    {
        product *= number % 10;
    }

    cout << "The product of the digits of the given number is: " << product << endl;

    return 0;
}
