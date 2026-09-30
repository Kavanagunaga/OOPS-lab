// Write a c++ program to implement static member Functions... Display only the count(static variable).

#include<iostream>
using namespace std;

class Item{
    static int Count;
    int c;
public:
    static void display()
    {
        cout<<"The value of count :"<<Count<<endl;
    }
    int getdata(int a)
    {
        c=a;
        Count=c;
        return 0;
    }

};

int Item:: Count;


int main()
{
    Item i1,i2,i3;
    Item::display();
    i1.getdata(100);
    Item::display();
    i2.getdata(200);
    Item::display();
    i3.getdata(300);
    Item::display();
    return 0;

}
