#include<bits/stdc++.h>
using namespace std;
void facto(int n,int i,int fact)
{
    if(i>n)
        {cout<<"factorial of "<<n<<" is "<<fact;
        return;}
    //i++;
    //fact(n,i,fact);
    facto(n,i+1,fact*i);
}
int main()
{
    int n;
    cin>>n;
    facto(n,1,1);
    return 0;
}