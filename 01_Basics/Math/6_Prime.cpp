#include<bits/stdc++.h>
using namespace std;
void math(int n)
{
    int t=0;
    // for(int i=1;i<=n;i++) O(N)
    // {
    //     if(n%i==0 && i!=1 && i!=n)
    //        { t=1;
    //         break;
    //        }   
    // }

     for(int i=1;i<=sqrt(n);i++) //O(sqrt(N))
    {
        if(n%i==0 && i!=1 && i!=n)
           { t=1;
            break;
           }   
    }

    if(t==1)
        cout<<"it is not a prime number";
    else
        cout<<"it is a prime number";
}
int main()
{
    int n;
    cin>>n;
    math(n);
    return 0;
}