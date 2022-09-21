// 03 - Determine whether the given character is vowel Or consonant?

#include<iostream>
using namespace std;
int main() {
    char ch;
    cout<< "Enter a character : ";
    cin>>ch;
    if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U') 
    cout<<"Entered character is a vowel";
    else 
    cout << "Entered character is a consonant";
    return 0;
}