#include<bits/stdc++.h>
using namespace std;
int fiba(int n)
{
    if(n==0 || n==1)
        return n;
    // if(n<0)
    //  return 0;
    return fiba(n-1) + fiba(n-2);     
}
int main()
{
    int n;
    cin>>n;
    //int a[n+1];
    ///fiba(n,a);
    cout<<n<<"th fibannoci number is "<<fiba(n);
    return 0;
}