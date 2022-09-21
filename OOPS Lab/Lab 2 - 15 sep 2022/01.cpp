/* 01 - Write a C++ program to create a class named as employee with private address as employee ID and salary.
        Provide appropriate public interface to initialise these attributes to display details. */

#include <iostream>
using namespace std;

class employee {
    private:
        string empID;
        float empSal;
    public:
        void get();
        void display();
};

void employee::get() {
    cout<<"Enter Employee ID : ";
    cin>>empID;
    cout<<"Enter Employee salary : ";
    cin>>empSal;
}
void employee::display() {
    cout<<"\n";
    cout<<"Employee ID : "<<empID<<endl;
    cout<<"Employee salary : "<<empSal<<endl;
}

int main() {
    employee emp1;
    emp1.get();
    emp1.display();

    return 0;
}