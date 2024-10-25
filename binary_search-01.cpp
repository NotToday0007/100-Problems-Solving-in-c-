#include<iostream>
using namespace std;

int main(){
int i,j,k;

int array[]={10,11,12,14,22,33,55,66,77};

cout << "Give your targeted array: ";
cin >> j;//11

int length = sizeof(array)/sizeof(array[0]);

cout << "length of array is: " << length;

int n=length/2;
// cout <<"\n" <<"divide: " <<n;//14

cout<<"\n";
if(array[n]>=j)
{
    for(i=0;i<=n;i++){
        if(array[i]==j)
        {
        cout<<"array found in index: "<<i+1;
        }
    }
}

else{
   
   if(array[n]<j){
    for(i=n+1;i<length;i++){
        if(array[i]==j){
            cout << "array index found in: "<<i+1;
        }
    }
   }


}

    return 0;
}