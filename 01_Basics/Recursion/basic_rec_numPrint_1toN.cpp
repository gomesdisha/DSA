#include<bits/stdc++.h>
using namespace std;
// void rec(int i,int n) //normal recursion using i
// {
//     if(i>n)
//         return;
//     cout<<i<<endl;
//     rec(i+1,n);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     rec(1,n);
//     return 0;
// }
void rec(int i,int n)  //using backtracking method
{
    if(i<1)
        return;
    rec(i-1,n);
     cout<<i<<endl; //prints when backtracking starts
}
int main()
{
    int n;
    cin>>n;
    rec(n,n);
    return 0;
}