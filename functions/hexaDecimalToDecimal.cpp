#include <bits/stdc++.h>
using namespace std;

int hexadecimalToBinary(string n) {
    int x = 1;
    int ans = 0;
    int s = n.size(); // Corrected variable name 's'

    for (int i = s - 1; i >= 0; i--) { // Changed '>' to '>=' and '0' to '0'
        if (n[i] >= '0' && n[i] <= '9') {
            ans += x * (n[i] - '0');
        } else if (n[i] >= 'A' && n[i] <= 'F') {
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }

    return ans;
}

int main() {
    string n;
    cout << "Enter your hexadecimal number: ";
    cin >> n;
    cout << "Your deciaml conversion is: " << hexadecimalToBinary(n) << endl;
    return 0;
}
