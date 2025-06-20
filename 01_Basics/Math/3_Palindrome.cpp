#include<bits/stdc++.h>
using namespace std;
void math(int n)
{
    int rev =0;
    int og=n;
    while(n>0)
    {
        rev = (rev*10) + n%10;
        n=n/10;
    }
   // cout<<rev;
    if(rev == og)
        cout<<" is palindrome";
    else
        cout<<" not a palindrome" ;
    
}
int main()
{
    int n;
    cin>>n;
    math(n);
    return 0;
}