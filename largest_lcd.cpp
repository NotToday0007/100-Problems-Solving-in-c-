#include<iostream>
using namespace std;

int main() {
    int j, k, largest = 0;  // Initialize largest with 0

    cout << "Enter the first number: ";
    cin >> j;
    cout << "Enter the second number: ";
    cin >> k;

    // Find the GCD
    for (int i = 1; i <= j && i <= k; i++) {
        if (j % i == 0 && k % i == 0) {
            largest = i;  // Update largest to the latest divisor found
        }
    }

    cout << "The greatest common divisor is: " << largest << endl;
    return 0;
}
