#include<iostream>
using namespace std;
class test
{
    private:
        int marks;
        float spi;
    public:
        void setdata()
        {
            marks=270;
            spi=6.5;
        }
        void display()
        {
            cout << "marks= " << marks << endl;
            cout<< "spi= "<<spi;
        }
};
int main()
{
    test o1;
    o1.setdata();
    o1.display();
    return 0;
}
