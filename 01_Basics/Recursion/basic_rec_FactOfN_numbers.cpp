#include<bits/stdc++.h>
using namespace std;
// void facto(int n,int i,int fact) //PARAMETERISED WAY
// {
//     if(i>n)
//         {cout<<"factorial of "<<n<<" is "<<fact;
//         return;}
//     //i++;
//     //fact(n,i,fact);
//     facto(n,i+1,fact*i);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     facto(n,1,1);
//     return 0;
// }

int facto(int n)//FUNCTIONAL WAY
{
   if(n==0)
        return 1;
    return n*facto(n-1);
   
}
int main()
{
    int n;
    cin>>n;
    cout<<"factorial of "<<n<<" is "<<facto(n);
    return 0;
}