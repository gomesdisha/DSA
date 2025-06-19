#include<bits/stdc++.h>
using namespace std;
void print1(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<i;j++)
        {
            char ch = 'A'+ j - 1; 
            cout<<ch;
        }
        for(j=i;j>=1;j--)
        {
             char ch = 'A'+ j - 1; 
            cout<< ch;
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