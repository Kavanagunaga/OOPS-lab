#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int age;
public:
    void setdata()
    {
        cin>>name;
        cin>>age;
    }
    void display()
    {
        cout<<"name="<<name<<endl;
        cout<<"age="<<age;
    }
};
int main()
{
    student s1, s2;
    s1.setdata();
    s1.display();
    s2.setdata();
    s2.display();
    return 0;
}
