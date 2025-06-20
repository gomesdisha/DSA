#include<bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = n-i; j >= 1; j--)
        {
            cout << "* ";
        }
        for(j=0;j<2*(i);j++)
        {
            cout<<"  ";
        }
         for(j = 1; j <= n-i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for(j=0;j<2*(n-i-1);j++)
        {
            cout<<"  ";
        }
         for(j = 0; j<= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    //  int iniS = 0;  //better in terms of spacing var, inis
    //   for(int i=0;i< N;i++){
    //       for(int j=1;j<=N-i;j++){
    //           cout<<"*";
    //       }
    //       for(int j=0;j<iniS;j++){
    //           cout<<" ";
    //       }
    //       for(int j=1;j<=N-i;j++){
    //           cout<<"*";
    //       }
    //       iniS+=2;
    //       cout<<endl;
    //   }
    //   iniS = 2*N -2;
    //   for(int i=1;i<=N;i++){
    //       for(int j=1;j<=i;j++){
    //           cout<<"*";
    //       }
    //       for(int j=0;j<iniS;j++){
    //           cout<<" ";
    //       }
    //       for(int j=1;j<=i;j++){
    //           cout<<"*";
    //       }
    //       iniS-=2;
    //       cout<<endl;
    //   }
}

int main()
{
    int n;
    cin >> n;
    print1(n);
}