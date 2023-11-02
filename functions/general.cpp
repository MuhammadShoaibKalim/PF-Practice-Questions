#include <iostream>
using namespace std;

bool isPerfect(int number) {
    int sum = 1;  // Start with 1 as the sum, as every number is divisible by 1

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            if (i * i != number) {
                sum = sum + i + (number / i);
            } else {
                sum = sum + i;
            }
        }
    }

    return (sum == number);
}

int main() {
    int start, end;

    cout << "Enter the range (start and end): ";
    cin >> start >> end;

    cout << "Perfect numbers in the range [" << start << ", " << end << "]:\n";

    for (int number = start; number <= end; number++) {
        if (isPerfect(number)) {
            cout << number << " ";
        }
    }

    cout << endl;

    return 0;
}
