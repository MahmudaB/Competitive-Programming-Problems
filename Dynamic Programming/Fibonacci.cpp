//In the name of Almighty Allah
#include<bits/stdc++.h>
using namespace std;
int f(int n,vector<int>&dp)
{
   if(n<=1)return n;
   if(dp[n]!=-1)return dp[n];
   
   return dp[n]=f(n-1,dp)+f(n-2,dp);
}
int main()

{
     int n;
     cin>>n;
     
     // Memoization recursion (top-down)
     vector<int>dp(n+1,-1);
     cout<<f(n,dp)<<endl; 
     
     //tabulation (bottom up)
     vector<int>dpT(n+1);
     dpT[0]=0;
     dpT[1]=1;
     
     for(int i=2;i<=n;i++)
      dpT[i]=dpT[i-1]+dpT[i-2];
    
    cout<<dpT[n]<<endl;
    
    //Space Optimization 
    int prevP=0,pre=1,cur;
    for(int i=2;i<=n;i++)
    {
      cur=pre+prevP;
      prevP=pre;
      pre=cur;
    }
    cout<<pre<<endl;
    return 0;
}
