#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int i,n,j;
cout << "enter a number: ";
cin >> n;

string num = to_string(n);
int length = num.length();

int total = 0;
for (i=0;i<length;i++){
int digit = num[i]-'0';
 total = total + pow(digit,length);

}

if(total==n)

{
    cout << "it is a armstrong number";
}
else
{
    cout<< "not a armstrong number";
}
return 0;
}