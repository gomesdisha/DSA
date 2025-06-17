#include<bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int i, j;
    for(i = 0; i < (2*n)-1; i++)
    {
        for(j = 0; j <(2*n)-1; j++)
        {
            cout << n ;
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