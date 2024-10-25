#include<iostream>
using namespace std;

int main(){

int j,k,l,n;
int sum=0;
cout << "input how many nums: ";
cin >> n;
int array[n]={};
cout<< "number are: ";
for(int i=0;i<n;i++)
{
cin >>array[i];
}

cout<< "array num are: ";
for(int i=0;i<n;i++)
{
cout << array[i]<<" ";
}

for (int i=0;i<n;i++){
    sum = sum+ array[i];
}

cout << "\n" << "sum of all array elements is: " << sum;


    return 0;
}