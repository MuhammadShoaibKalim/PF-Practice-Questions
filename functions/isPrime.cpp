#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
bool isPrime(int num);

int main() {
    int a, b;
    cout<<"Enter you number :";
    cin >> a >> b;

    for (int i = a; i < b; i++) {
        if (isPrime(i)) {
            cout <<"Here is list of number :"<< i << endl;
        }
    }

    return 0;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
} 
