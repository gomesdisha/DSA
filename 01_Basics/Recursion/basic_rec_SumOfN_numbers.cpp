#include<bits/stdc++.h>
using namespace std;
void rec(int n,int i,int sum)
{
    if(i>n)
    {   
        cout<<"sum of "<<n<<" numbers is "<<sum<<endl;;
        return;
    }
    //sum+=i;
    rec(n,i+1,sum+i);  
}
int main()
{
    int n;
    cin>>n;
    rec(n,1,0);
    return 0;
}