
#include<iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
    string name;
public:
    Student(int a, string b):roll_no(a),name(b){}
};

class Test
{
protected:
    int marks[5];
public:
    void input_marks()
    {
        cout<<"Enter the Subject Marks out of 100\n"<<endl;
        for(int i=0;i<5;i++)
        {
            cout << "Enter the Marks of "<< i+1 <<"th"<<" Subject: ";
            cin>>marks[i];
        }
    }
};

class Result:public Student,public Test
{
    int total_marks;
    float percentage;
public:
    Result(int a,string b):Student(a,b){}


    void calculate_total_marks()
    {
        total_marks = marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    }

    void calculate_percentage()
    {
        percentage=total_marks/5;
    }

   void display_result()
    {
        cout << "\n\n\nStudent Name: " <<name<< "\n Roll No: "<<roll_no;
        for(int i=0;i<5;i++)
        {
            cout<<"\n"<<i+1<<"st Subject Marks: "<<marks[i];
        }
        cout << "\nTotal Marks: "<<total_marks<<"/500"<<"\npercentage: "<<percentage<<"%"<<endl;
    }
};

int main()
{
    Result r1(632,"Kingson");
    r1.input_marks();
    r1.calculate_total_marks();
    r1.calculate_percentage();
    r1.display_result();
    return 0;
}
