#include<bits/stdc++.h>
using namespace std;
int math(int i,int n,char a[])
{
    if(i>=n/2)
        return 0;
    if(a[i]!=a[n-i-1])
        return 1;
    math(i+1,n,a);
}
int main()
{
    int n,b;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    b = math(0,n,a);
    if(b==1)
        cout<<" not palindrome ";
    else
        cout<<" is a palindrome ";
    return 0;
}