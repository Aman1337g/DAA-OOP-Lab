/* 02 - WAP to create a class triangle with 3 sides as its attributes. The attributes need to be placed under protected
        visibility. Provide another function to initialize these attributes and a method to find area of triangle.
*/
#include <iostream>
#include<math.h>
using namespace std;

class triangle {
    protected:
        double a,b,c;
    public:
        void getdata() {

            cout<<"Enter first side of triangle:";  cin>>a;
            cout<<"Enter second side of triangle:"; cin>>b;
            cout<<"Enter third side of triangle:"; cin>>c;
        }

        double area() {
            double s;
            s=(a+b+c)/2;
            return sqrt(s*(s-a)*(s-b)*(s-c));
        }
};
int main() {

    triangle t;
    t.getdata();
    t.area();
    cout<<"Area of the Triangle is: "<<t.area()<<endl;
    return 0;
}