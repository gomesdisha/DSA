//count digits of a number
#include<bits/stdc++.h>
using namespace std;
int countDigits(int n)
{
   int count = 0;
   while(n>0)
   {
      count++;
      n=n/10;
   }
   return count;
   
}
int main()
{
   int n;
   cin>>n;
   int count1 = countDigits(n);
   cout<<"count is "<<count1;
   return 0; 
}