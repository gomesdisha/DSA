#include<bits/stdc++.h>
using namespace std;
// void rec(int n,int i,int sum) //PARAMETERISED WAY
// {
//     if(i>n)
//     {   
//         cout<<"sum of "<<n<<" numbers is "<<sum<<endl;;
//         return;
//     }
//     //sum+=i;
//     rec(n,i+1,sum+i);  
// }
// int main()
// {
//     int n;
//     cin>>n;
//     rec(n,1,0);
//     return 0;
// }
int rec(int n) //FUNCTIONAL WAY
{
    if(n==0)
        return 0;
    //sum+=i;
    return n + rec(n-1);
}
int main()
{
    int n;
    cin>>n;
   // rec(n,1,0);
   cout<<"sum of "<<n<<" numbers is "<<rec(n);
    return 0;
}