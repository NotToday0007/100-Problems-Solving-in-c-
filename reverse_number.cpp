#include<iostream>
#include<string>
using namespace std;

int main(){

int i,j;
string str="";

cout << "enter a numer: ";
cin >> j;

string intTostring = to_string(j);
int length= intTostring.length();

for ( i = length - 1; i >= 0; i--) {
    str = str + intTostring[i]; // Concatenate the character to str
}

cout << "reverse iiss: " << str;
    return 0;
}