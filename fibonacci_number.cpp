#include<iostream>
using namespace std;
int main(){
int first_num = 0;
int second_num = 1;
int n,i,f;

cout << "enter a number: ";
cin >> n;

for (i=2; i<n; i++){
    f = second_num + first_num;
    first_num=second_num;
    second_num=f;

}
cout << "the fibonachi number of " << n << " is: " << f;

    return 0;
}