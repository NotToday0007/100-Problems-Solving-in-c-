#include<iostream>
using namespace std;
int main(){

int n,i;
int f = 1;

cout << "Enter a number: ";
cin >> n;

for( i=n-1; i>0; i--){
    f= n*i;
    n=f;
}
cout << f;
    return 0;
}