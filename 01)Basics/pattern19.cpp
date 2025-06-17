#include<bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = n-i; j >= 1; j--)
        {
            cout << "*";
        }
        for(j=0;j<2*(i);j++)
        {
            cout<<" ";
        }
         for(j = 1; j <= n-i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for(j=0;j<2*(n-i-1);j++)
        {
            cout<<" ";
        }
         for(j = 0; j<= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print1(n);
}