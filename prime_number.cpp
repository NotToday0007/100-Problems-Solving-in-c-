#include<iostream>
using namespace std;
int main(){
int i,n,f;
f= 0;

cout << "enter a numer: ";
cin >> n;

if (n== 0 || n== 1)
{
    cout << n << " is not a prime number";
}

else{

    for (i=2; i<n/2; i++){
        if (n%i==0){
           f=1;
        break;
        }
    }
        
   if(f == 1){
    cout << n << " is a composite number";
   }
   else{
    cout << n << " is a prime number";
   }
}

    return 0;
}