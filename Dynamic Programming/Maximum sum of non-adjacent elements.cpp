#include <bits/stdc++.h> 

// Memoization
/*int f(int i,vector<int> &a, vector<int> &dp){
    if(i==0)return a[i];
    if(i<0)return 0;
    if(dp[i]!=-1)return dp[i];
    int pick=a[i]+f(i-2,a,dp);
    int notPick=f(i-1,a,dp);

    return dp[i]=max(pick,notPick);
}*/
int maximumNonAdjacentSum(vector<int> &nums){
    
    int n=nums.size();

    // Tabulation
    /*vector<int> dp(n);
    dp[0]=nums[0];
    
    for(int i=1;i<n;i++){
        int pick=nums[i];
        if(i>1)pick+=dp[i-2];
        int notPick=dp[i-1];
        
        dp[i]=max(pick,notPick);
    }*/

    // Space Optimization
    int pre=nums[0],pre2=0;
    for(int i=1;i<n;i++)
    {
         int pick=nums[i];
         if(i>1)pick+=pre2;
         int notPick=pre;

        int cur=max(pick,notPick);
        pre2=pre;
        pre=cur;

    }
    return pre;
}