/* 04 - WAP to create class convert which contains a private attribute named seconds. Provide a public interface
        that would accept a positve value from user. Provide another public interface that would convert the 
        seconds value to hour minutes and seconds and display it.
*/

#include <iostream>
using namespace std;

class convert {

    private:
        int seconds;
    public:
        void input() {
            cout<<"Enter the total time in seconds :";
            cin>>seconds;
        }
        void clock() {
            int a,b,c;
            a=seconds/3600;
            b=((seconds%3600)/60);
            c=((seconds%3600)%60);
            cout<<"The time in hours:mins:seconds is : "<<a<<":"<<b<<":"<<c<<endl;
        }
};

int main()
{
    convert s;
    s.input();
    s.clock();
    return 0;
}