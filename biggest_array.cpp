#include<iostream>
using namespace std;
int main()
{
    int n, m, a[100];
    cout<<"enter n\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
    }
    cout<<"greatest no: "<< m;
    return 0;
}
