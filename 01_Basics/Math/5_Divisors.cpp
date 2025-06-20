#include<bits/stdc++.h>
using namespace std;
void math(int n)
{
    cout<<"divisors are : "<<endl;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
         cout<<i<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    math(n);
    return 0;
}