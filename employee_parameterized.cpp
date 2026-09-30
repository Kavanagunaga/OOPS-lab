#include<iostream>
using namespace std;
class employee{
int id;
int sal;
string department;
public:
    employee(int x, int y)
    {
        department="e and c";
        id=x;
        sal=y;
    }
    employee()
    {

    }
    void print()
    {
        cout<<endl<<"employee details"<<endl;
        cout<<"id="<<id<<endl;
        cout<<"salary="<<sal<<endl;
        cout<<"department="<<department<<endl;
    }
};
int main()
{
    int x,y, w,z;
    cout<<"enter details"<<endl;
    cin>>x;
    cin>>y;
    cin>>w;
    cin>>z;
    employee e1(x, y), e2(w,z), e3;
    e1.print();
    e2.print();
    return 0;
}
