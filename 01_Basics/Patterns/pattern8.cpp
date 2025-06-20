#include<bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int i,j;
    for(i=n-1;i>=0;i--)
    {   for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(j=2*i+1;j>0;j--)
        {
            cout<<"*";
        }
        //  for(j=0;j<n-i-1;j++)
        // {
        //     cout<<" ";
        // }
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