#include<iostream>
using namespace std;

class Student
{
    int roll_no;
    string name;
public:
    //Student(){};                                              no need
    Student(int a,string b):roll_no(a),name(b){}

};

class Test
{
    int marks;
public:
    //Test(){};                                                 no need
    Test(int c):marks(c){}
};

class Result:public Student,public Test
{
    int total_marks;
    float percentage;
public:
    Result(int d,float e,int r,string n,int m):Student(r,n),Test(m),total_marks(d),percentage(e){}
    void display()
    {

      cout<<total_marks<<percentage<<endl;
    }
};

int main()
{
   // Student s1;                                 no need
    //Test t1;                                    no need
    Result r1(97,85.7,632,"kingson",65);        //  no need (because its parameterized constructor)
    r1.display();

    return 0;
}
