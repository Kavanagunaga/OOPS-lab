//write a cpp program with multi-level inheritance using constructor initializer list.(coppied prog_2 from class_6 and editing it below)

// Multi-level Inheritance   (to complete)
#include<iostream>
using namespace std;

class Person
{

public:
    void display1()
    {
        cout<<"Person Class"<<endl;
    }
};

class Student:public Person
{
public:
    void display2()
    {
        cout<<"Student Class"<<endl;
    }
};

class IT_Student:public Student
{
public:
    IT_Student(string a,string b,float c):Student()
    void display3()
    {
        cout<<"IT_Student Class"<<endl;
    }
};

int main()
{
Person p;
Student s;
IT_Student i("Kingson","01FE23BEC331",8.57);
p.display1();
cout<<endl;
s.display2();
s.display1();
cout<<endl;
i.display3();
i.display2();
i.display1();

return 0;
}
