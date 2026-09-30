#include<iostream>
using namespace std;
class employee{
int id;
string department;
public:
    employee()
    {
        cout<<"enter employee details"<<endl;
        cin>>id;
        cin>>department;
    }
    void print()
    {
        cout<<"employee details"<<endl;
        cout<<id<<endl;
        cout<<department;
    }
};
int main()
{
    employee e1;
    e1.print();
    return 0;
}
