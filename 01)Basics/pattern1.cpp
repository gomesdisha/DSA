#include<bits/stdc++.h>
using namespace std;

void print1(int n)
{   int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<< "* " ;
        }
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        print1(n);
    }
}