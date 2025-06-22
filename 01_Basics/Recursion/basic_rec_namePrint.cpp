#include<bits/stdc++.h>
using namespace std;
//int cnt = 0;
// void rec(int n)  this is using global variable cnt and only 1 parameter
// {  
//     if(cnt == n)
//         return;
//     cout<<"Disha Gomes "<<endl;
//      cnt++;
//     rec(n);
//}

void recur(int i,int n)//used multiple parameter for recursion, no global var
{
    if(i>n)
        return;
    cout<<"Disha Gomes"<<endl;
    i++;
    recur(i,n);
}
int main()
{
    int n;
    cin>>n;
    //rec(n);
    recur(1,n);
    return 0;
}