#include<iostream>
using namespace std;

int main(){
  
int i,o;
cout<< "enter first number: ";
cin>> i;
cout<< "enter esenond numbebr: ";
cin >> o;

if(i>o){

cout << i <<" is grater than " <<o;

}
else if(o>i){
  cout<< o <<" is grater than "<<i;
}
else{
  cout<<"the both number is equal";
}
  return 0;
}