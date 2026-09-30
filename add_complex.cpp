#include<iostream>
using namespace std;
class complex
{
    float re, im;
public:
    void setnumber();
    void print();
    void add(complex c1, complex c2);
};
void complex :: setnumber()
{
    cout<<"enter complex no"<<endl;
    cin>>re;
    cin>>im;
}
void complex :: print()
{
    cout<<"the complex number is: ";
    cout<<re<<"+i"<<im<<endl;
}
void complex :: add(complex c1, complex c2)
{
    re=c1.re+c2.re;
    im=c1.im+c2.im;
}
int main()
{
    complex c1, c2,c3;
    c1.setnumber();
    c2.setnumber();

    c3.add(c1,c2);
    c3.print();
    return 0;
}
