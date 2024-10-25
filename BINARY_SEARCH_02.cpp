#include<iostream>
using namespace std;

int main(){
int i,j,k, low,high;

bool found = false;

int array[]={11,12,13,14,15,16,22,23,24,25,28};

cout<< "select a target: ";
cin >> k;
int length = sizeof(array)/sizeof(array[0]);
cout << "length is: "<<length <<'\n';
int mid;
low=0;
high=length-1;
while(low<=high){

 mid=(low+high)/2;
if(array[mid]==k){
    found=true;
    break;
}
else if(array[mid]<k){
 low=mid+1;
}
else{
high=mid-1;
}

}

if(found){
cout<< "array found at index: "<< mid+1;
}
else{
    cout<< "index not found in array";
}

    return 0;
}