#include<iostream>
using namespace std;
int main(){

int i,n;

cout <<"take a number: ";
cin >> n;
for (i=1; i<=10;i++){
    cout <<n <<"*"<< i <<" : "<< n*i <<"\n";
}

    return 0;
}