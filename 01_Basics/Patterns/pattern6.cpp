#include<bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int i,j;
    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    print1(n);
    return 0;
}