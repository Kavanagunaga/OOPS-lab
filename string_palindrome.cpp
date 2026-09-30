#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string a="civic";
    string s[100];
    strcpy(s,a);
    strrev(a);
    if(strcmp(a, s)==0)
    {
        cout<<"palindrome";
    }
}
