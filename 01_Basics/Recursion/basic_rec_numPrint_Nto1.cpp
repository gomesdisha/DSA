#include<bits/stdc++.h>
using namespace std;
// void rec(int i)
// {
//     if(i<=0)
//         return;
//     cout<<i<<endl;
//    // i--;
//     rec(i-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     rec(n);
//     return 0;
// }

void rec(int i,int n) //using backtracking method
{
    if(i>n)
        return;
   // i--;
    rec(i+1,n);
    cout<<i<<endl;
}
int main()
{
    int n;
    cin>>n;
    rec(1,n);
    return 0;
}