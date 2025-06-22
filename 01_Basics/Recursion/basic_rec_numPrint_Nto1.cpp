#include<bits/stdc++.h>
using namespace std;
void rec(int i)
{
    if(i<=0)
        return;
    cout<<i<<endl;
   // i--;
    rec(i-1);
}
int main()
{
    int n;
    cin>>n;
    rec(n);
    return 0;
}