#include <iostream>
#include <string>
using namespace std;

int main() {
    int i,j;
    string myWord;
    int same = 1; // Assume it's a palindrome initially

    cout << "Enter any word: ";
    cin >> myWord;

    int length = myWord.length();

    // Nested loops to check palindrome
    for ( i = 0, j=length-1-i; i <= length && j>=0; i++,j--) {

          
            if (myWord[i] != myWord[j]) { // Check for mismatch
                same = 0; // Mark it as not a palindrome
                break; // Exit the inner loop if a mismatch is found
            }
        
        
        }
    

    // Display the result
    if (same == 1) {
        cout << "It is a palindrome word." << endl;
    } else {
        cout << "Not a palindrome word." << endl;
    }

    return 0;
}
