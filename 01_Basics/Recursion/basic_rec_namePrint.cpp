#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void rec(int n)
{  
    if(cnt == n)
        return;
    cout<<"Disha Gomes "<<endl;
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