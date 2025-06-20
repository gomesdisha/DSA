#include<bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int i,j;
    char c='A';
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {   
            cout<<char (c + j - 1)<<" ";
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