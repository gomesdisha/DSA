#include<bits/stdc++.h>
using namespace std;
void math(int n)
{   
    int num=n,i,arm=0;
    while(n>0)
    {   
        i=(n%10);
       // arm += i*i*i ;
        arm += pow(i,3);
        n=n/10;
    }

    if(arm==num)
        cout<<"its an armstrong number";
    else 
        cout<<"not an armstrong number";
}
int main()
{
    int n;
    cin>>n;
    math(n);
    return 0;
}