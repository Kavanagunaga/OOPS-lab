// Sir displayed my code...
// THIS IS THE CORRECT CODE OF Class_9 prog_3...

#include<iostream>
using namespace std;

class Student
{
    int roll_no;
    string name;
public:
   // Student(){};                                            //  (here)
    Student(int a,string b):roll_no(a),name(b){}

};

class Test
{
    int marks;
public:
   // Test(){};                                             //    (here)
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

      cout<<"This is the total marks :"<<total_marks<<"\n This is the percentage :"<<percentage<<endl;
    }
};

int main()
{
   // Student s1;                       //(solved this error)          //error because you need to declare a default constructor above in the Student class;
   //  Test t1;                          //(solved this error)          //error because you need to declare a default constructor above in the Test class;
    Result r1(97,85.7,632,"kingson",65);
    r1.display();

    return 0;
}
