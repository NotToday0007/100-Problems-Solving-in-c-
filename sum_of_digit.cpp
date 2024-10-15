#include<iostream>
#include<string>
using namespace std;

int main(){
int n,m,i;
int sum = 0;
cout << "enter a digit: ";
cin >> n;

string intTOstring = to_string(n);
int length = intTOstring.length();

for( i=0; i<length ; i++){
 sum = sum + intTOstring[i] - '0';

}
cout << "sum is: " << sum;
    return 0;
}