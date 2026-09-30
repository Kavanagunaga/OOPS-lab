#include<iostream>
using namespace std;
class time{
int hour, minute, sec;
public:
    void settime();
    void print();
    void addtime(time x, time y);
};
void time :: settime()
{
    cout<<"enter time"<<endl;
    cin>>hour; cin>>minute; cin>>sec;
}
void time :: print()
{
    cout<<"time is- ";
        cout<<hour;
        cout<<":"<<minute;
        cout<<":"<<sec<<endl;
}
void time::addtime(time x, time y)
{
    hour=x.hour+y.hour;
    minute=x.minute+y.minute;
    sec=x.sec+y.sec;
}
int main()
{
    time t1, t2, t3;
    t1.settime();
    t2.settime();
    t3.addtime(t1, t2);
    t3.print();
    return 0;
}
