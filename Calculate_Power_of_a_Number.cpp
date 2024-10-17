#include<iostream>
using namespace std;

int main(){
int i,k,n,l;
cout << "enter the base: ";
cin >> k;
cout << "enter the power: ";
cin >> n;
int total =0;
l=k;
for (i=1;i<n;i++){
  k = k*l; 
}


cout << "the claculated power is: "<<k;
    return 0;
}