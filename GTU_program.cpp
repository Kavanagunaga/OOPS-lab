#include<iostream>
#include<string>
using namespace std;
class student
{
    int roll;
    string name;
public:
    void setdata1()
    {
        cin>>roll>>name;
    }
};
class test
{
protected:
    int marks[5];
public:
    void setdata2()
    {
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
};
class result : public student, public test
{
    int total_marks=0;
    float percentage;
public:
    void compute()
    {
        for(int i=0;i<5;i++)
        {
            total_marks=total_marks+marks[i];
        }
        percentage=(total_marks/500)*100;
    }
    void display()
    {
        cout<<total_marks<<endl;
        cout<<percentage<<endl;
    }
};
int main()
{
    result r1;
    r1.setdata1();
    r1.setdata2();
    r1.compute();
    r1.display();
    return 0;
}
