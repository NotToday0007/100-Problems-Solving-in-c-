#include<iostream>
#include<string>
using namespace std;
int main(){

int i,n,num;
string word;
cout << "enter a word: ";
cin >> word;
int count=0;
int length = word.length();

for (i=0; i<length; i++)
{

  if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] =='u') {
    count++;
}
}

cout << "num of vowel is: " << count;
    return 0;
}