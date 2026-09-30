// write a program to find out sum of 2 private data members numA and numB of 2 classes abc and xyz using a common friend function. Assumme that the prototype for both the classes will be int add(abc, xyz);

#include <iostream>
using namespace std;
class xyz; // forward declaration
class abc{
    int numA;
public:
    void setdata(int a){
        numA = a;
    }
    friend int add(abc, xyz);
};

class xyz{
    int numB;
public:
    void setdata(int b){
        numB = b;
    }
    friend int add(abc, xyz);
};

int add(abc a, xyz x){
    return (a.numA + x.numB);
}

int main(){
    abc A;
    xyz X;
    A.setdata(5);
    X.setdata(10);
    cout << "The sum of the two numbers is: " << add(A, X) << endl;
    return 0;
}
