#include<iostream>
using namespace std;

class person {
    public:
    void display1() {
        cout<<"I am a person class"<<endl;
    }
};

class student : public person {
    public:
    void display2() {
        cout<<"I am a student class"<<endl;
    }
};

class ITstudent : public student {
    public:
    void display3() {
        cout<<"I am an IT student class"<<endl;
    }
};

int main() {
    person p1;
    p1.display1();
    student s1;
    s1.display1();
    s1.display2();
    ITstudent it1;
    it1.display1();
    it1.display2();
    it1.display3();
}
