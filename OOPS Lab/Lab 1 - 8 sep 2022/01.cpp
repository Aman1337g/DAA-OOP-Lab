// 01 - Write a C++ program to add two numbers.

#include<iostream>
using namespace std;
int main() {
    int x, y;
    cout<<"Enter a number x : ";
    cin>>x;
    cout<<"Enter a number y : ";
    cin>>y;
    cout<<"Sum of x and y is : "<<x+y<<endl;
    return 0;
}

// Method 2 - using scope resolution operator
// int main() {
//     int x, y;
//     std::cout<<"Enter a number x : ";
//     std::cin>>x;
//     std::cout<<"Enter a number y : ";
//     std::cin>>y;
//     std::cout<<"Sum of x and y is : "<<x+y;
//     return 0;
// }