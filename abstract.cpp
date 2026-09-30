#inlude<iostream>
uinsg namespace std;
class shape
{
protected :
    float x;
public:
    void getDate (){  cim >> x;}
    virtual float calculateArea() =0;
};
class Square : public shape
{
public:
    float calculateArea()
    {
        return x*x;}
};
class Circle : public shape
{
    public }
};
};
