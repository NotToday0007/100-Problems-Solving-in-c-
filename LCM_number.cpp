#include<iostream>
using namespace std;

int main(){
int i,j,k,l;
cout << "enter first num: ";
cin >> k;
cout<< "enter second num: ";
cin >> j;
int largest=0;
for(i=1;i<=k && i<j; i++){

    if (k%i==0 && j%i==0){
      largest=i;
    }
}

int lcm=(k*j)/largest;
cout << "the lcm is: " << lcm;
    return 0;
}