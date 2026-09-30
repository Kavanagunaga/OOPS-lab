#include<iostream>
using namespace std;
class time{
int hour, minute, sec;
public:
    void settime()
    {
        cout<<"enter hour, minute and  sec"<<endl;
        cin>>hour;
        cin>>minute;
        cin>>sec;
    }
    void print()
    {
        cout<<"time is- ";
        cout<<hour;
        cout<<":"<<minute;
        cout<<":"<<sec<<endl;
    }
};
int main()
{
    time t1, t2;
    t1.settime();
    t1.print();
    t2.settime();
    t2.print();
    return 0;
}
