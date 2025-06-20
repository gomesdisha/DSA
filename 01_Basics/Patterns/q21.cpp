#include<bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {   
        if(i==0 || i==n-1)
        {
            for(j = 0; j <n; j++)
        {
            cout <<"*" ;
        }
        cout << endl;
        }
        else
        {
        cout<<"*";
        for(j = 1; j <n-1; j++)
        {
            cout <<" ";
        }
        cout<<"*";
        cout << endl;
        }
        
        
    }
}

int main()
{
    int n;
    cin >> n;
    print1(n);
}