#include<bits/stdc++.h>
using namespace std;
void print1(int n) {
    // Write your code here.
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i;j>=0;j--)
        //for(j=0;j<i;j++)
        {
            //cout<<(i+j)%2<<" ";
           if((j+1)%2!=0)
            cout<<"1 ";
            else
            cout<<"0 ";
    
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