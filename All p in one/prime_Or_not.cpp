// #include<iostream>
// using namespace std;
// int main()
// {
// int number;
// int checker;
// int count=0;

// cout<<"Enter a number :";
// cin>>number;
// checker=1;

// while ( checker<=number)
// {
//     if(number%checker==0)
//     {
//         count++;
//     }
//     checker++;
// }
// if(count==2)
// {
//     cout<<"The given number is Prime.";
// }
// else
// {
//     cout<<" The given is not a prime number.";
// }



//   return 0;
// }  


#include<iostream>
using namespace std;

int main()
{
    int number;
    int checker;
    int count = 0;

    cout << "Enter a number: ";
    cin >> number;

    checker = 1;

    for(int checker=1; checker<= number; checker++)
    {
        if (number % checker == 0)
        {
            count++;
        }
        
    }

    if (count == 2)
    {
        cout << "The given number is Prime." << endl;
    }
    else
    {
        cout << "The given number is not a prime number." << endl;
    }

    return 0;
}
