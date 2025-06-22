#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void rec(int n)
{  
    if(cnt == n)
        return;
    cout<<cnt<<" ";
     cnt++;
    rec(n);
}
int main()
{
    int n;
    cin>>n;
    rec(n);
    return 0;
}