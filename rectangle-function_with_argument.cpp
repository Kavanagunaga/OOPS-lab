#include<iostream>
using namespace std;
class rectangle
{
private:
    int width;
    int height;
public:
    void set_values(int w, int l)
    {
        width=w;
        height=l;
    }
    int area()
    {
        return width*height;
    }
};
int main()
{
    rectangle r1;
    int w, l, a;
    cin>>w>>l;
    r1.set_values(w,l);
    cout<<r1.area();
    return 0;
}
