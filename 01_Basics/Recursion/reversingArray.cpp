#include<bits/stdc++.h>
using namespace std;
//void swap_rec(int l,int r,int a[])
void swap_rec(int i,int n,int a[])
{
    if(i==n/2) // using single var i
        return;
    swap(a[i],a[n-i-1]);
    swap_rec(i+1,n,a);
    // if(l==r || l>r)  //usig pointer l and r
    //     return;
    // swap(a[l],a[r-1]);
    // swap_rec(l+1,r-1,a);
}
int main()
{
   int n;
   cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    swap_rec(0,n,a);
    //swap_rec(0,n,a);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}//reversing using recursion: swapping method
//basically take 2 pointers l=a[0] and r=a[n-i-1], swap first l and r elements until l==r