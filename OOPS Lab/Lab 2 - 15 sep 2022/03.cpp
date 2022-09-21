/* 03 - Create a class costumer which store the details about bank customer. Private attributes account number, 
        balance, PAN no. . Provide appropriate public interface to initialize these attributes and display.
        Enter data for atleast 25 customers. 
*/

#include <iostream>
using namespace std;

class customer {
    private:
        string accNo;
        float accBal;
        string accPAN;
    public:
        void getdata() {

            cout<<"Enter account no. : ";
            cin>>accNo;
            cout<<"Enter account Balance : ";
            cin>>accBal;
            cout<<"Enter account PAN : ";
            cin>>accPAN;
        }

        void display() {
            cout<<"\n";
            cout<<"Entered ACC no. : "<<accNo<<endl;
            cout<<"Enter ACC Balance : "<<accBal<<endl;
            cout<<"Enter ACC PAN : "<<accPAN<<endl;
            cout<<"\n";
        }
};
int main() {
    customer cust;
    int i=1;
    while(i<=25) {
        cust.getdata();
        cust.display();
        i++;
    }

    return 0;
}