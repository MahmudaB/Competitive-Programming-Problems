#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& A, int k){
      
       map<long long,int>mp;
        long long sum=0;
        int mxLen=0,n= A.size();

        for(int i=0;i<n;i++){

            sum+=A[i];
            if(sum==1LL*k){
                mxLen=max(mxLen,i+1);
            }
            else if(mp.find(sum-k)!=mp.end()){
                mxLen=max(mxLen,i-mp[sum-k]);
            }
            
            if(mp.find(sum)==mp.end())
             mp[sum]=i;
        }
        return mxLen;
}

/*
//Input
2
3 5
2 3 5
3 1
-1 1 1
//output
2*/
3