#include<bits/stdc++.h>
using namespace std;
void math(int n1,int n2)
{
    int gcd,min1;
    if(n1<n2)
        min1=n1;
    else
        min1=n2;

    for(int i=1;i<=min1;i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    cout<<"gcd of "<<n1<<" and "<<n2<<" is = "<<gcd;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    math(n1,n2);
    return 0;
}