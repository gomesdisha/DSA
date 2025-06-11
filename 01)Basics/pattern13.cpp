#include<bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int i,j;
    int num=1;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<num<< " ";
            num = num + 1;
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