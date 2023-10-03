class Solution {
public:
    
    bool div(int mid,vector<int>& nums,int threshold)
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=((mid+nums[i]-1)/mid);
        return (sum<=threshold);
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int l=1,r=1e6;
        while(l<r)
        {
            int mid=(l+r)>>1;
            if(!div(mid,nums,threshold))
               l=mid+1;
            else r=mid;
        }
        
        return r;
    }
};