#include<bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {   for(k=0;k<=n-i-1;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i+1;j++)
        {
            cout<<"* ";
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