#include<bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = i; j >=0 ; j--)
        {   char ch ='A'+n-1-j;
            cout << ch ;
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