#include<iostream>
using namespace std;
int main(){
int i,j,n;
int num;

cout<< "enter how many numer is: ";
cin >> n;


cin >> num;
int largest=num;
for (i=0;i<n-1;i++){
    cin >> num;
  if(num>largest){
    largest=num;
  }


}
cout << "largest num: "<< largest;


    return 0;
}