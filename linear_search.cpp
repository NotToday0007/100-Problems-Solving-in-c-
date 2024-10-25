#include<iostream>
using namespace std;

int main(){
int i,j,k,n;

int array[]={22,2,24,34,34,44,55,66,77,88,11,22};
bool found = false;
cout<<"give a target array: ";
cin >> n;

int length = sizeof(array)/sizeof(array[0]);


for(i=0;i<length-1;i++){
if(array[i]==n){

    found= true;
    break;
}
}

if(found){
    cout << "target value found at index: "<<i+1;
}
else{
    cout << "target value not found";
}



    return 0;
}