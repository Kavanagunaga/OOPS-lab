#include<iostream>
using namespace std;

class numbers{
       int num1,num2;
public:
    void setdata(int a,int b);
    friend int add(numbers N1);
};

void numbers::setdata(int a,int b)
{
    num1=a;
    num2=b;
}

int add(numbers N1)
{
return(N1.num1+N1.num2);
}

int main()
{
    numbers N1;
    N1.setdata(3,5);
    cout<<"The Sum of the Two Numbers is: "<<add(N1)<<endl;

    return 0;
}

