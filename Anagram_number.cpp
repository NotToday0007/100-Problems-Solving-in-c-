#include<iostream>
#include<string>
using namespace std;
int main(){

int i,j,k;
string word1,word2;
cout << "take the first word: ";
cin >> word1;
cout << "take the second word: ";
cin >> word2;

int length1 = word1.length();
int length2 = word2.length();
int count=0;
int sum=0;


if(length1!=length2){

cout << "both are not anagram word";
}
else{

for ( int i=0;i<length1;i++){

for(int j =0;j<length2;j++){

if (word1[i]==word2[j])
 sum++;
}

if(sum>=1){
    count++;
    sum =0;
}

}
}

if (count==length1)
   {
    cout << "both words are anagram";
   }
   else{
    cout << "both words are not anagram";
   }
    return 0;
}