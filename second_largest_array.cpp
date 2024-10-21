#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int array[n];

    // Input the elements of the array
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    // Step 1: Find the largest number
    int largest = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    // Set the largest number to zero in the array
    for (int i = 0; i < n; i++) {
        if (array[i] == largest) {
            array[i] = 0;
            break; // Stop after setting the first occurrence to zero
        }
    }

    // Step 2: Find the second-largest number
    int secondLargest = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > secondLargest) {
            secondLargest = array[i];
        }
    }

    // Display the results
    cout << "The largest number is: " << largest << endl;
    cout << "The second-largest number is: " << secondLargest << endl;

    return 0;
}
