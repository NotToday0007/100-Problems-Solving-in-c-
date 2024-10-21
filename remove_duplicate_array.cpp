#include<iostream>
#include <vector>
using namespace std;

int main(){
int n,i,j;
cout << "enter the array size: ";
cin >> n;
int array[n] = {};

for(i=0;i<n;i++){
    cin >> array[i];
}
cout << "array element are: ";
for(i=0;i<n;i++){
    cout << array[i] << " ";
}

cout<<"\n";
cout<<"\n";
int length = sizeof(array)/sizeof(array[0]);
cout << "the length is: " << length;
cout<<"\n";
cout<<"\n";
 j=0;

for (int i = 1; i<n; i++)
{
   if(array[i]!=array[j]){

    j++;

    array[j]=array[i];

   }
   
}
j++;
cout << "total unique elements are: " << j;
cout<<"\n";
cout<<"\n";

cout << "after deleting unique array are: ";

for ( int i =0; i<j; i++){

    cout << array[i] << " ";
}
    return 0;
}