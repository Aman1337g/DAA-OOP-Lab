// 02 - Determine whether the given year is leap year or not? 

#include<iostream>
using namespace std;
int main() {
    int year;
    cout<<"Enter year : ";
    cin>>year;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) cout<<"Leap year";
    else cout<<"Not Leap Year";
    return 0;
}
