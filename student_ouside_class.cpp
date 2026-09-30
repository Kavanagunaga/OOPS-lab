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
    void update_age();
    void display()
    {
        cout<<"name="<<name<<endl;
        cout<<"age="<<age;
    }
};
void student :: update_age()
{
    age=age+1;
}
int main()
{
    student s1, s2;

    s1.setdata();
    s1.update_age();
    s1.display();

    return 0;
}

