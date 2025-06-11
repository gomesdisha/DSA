#include<bits/stdc++.h>
using namespace std;
void print1(int n) {
    // Write your code here.
    int i,j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<j+1;
        }
        //while(j<=2*(n-i-1))
        for(j=0;j<=2*(n-i-1);j++)
        {
            cout<<" ";
        }
        for(j=i+1;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    print1(n);
    return 0;
}