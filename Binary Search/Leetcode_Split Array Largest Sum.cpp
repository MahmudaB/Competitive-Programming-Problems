class Solution {
public:
    bool sub(int mid,vector<int>& nums,int k)
    {
        int cnt=1,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>mid)
                return false;
            if(sum+nums[i]>mid)
                cnt++,sum=nums[i];
            else sum+=nums[i];
        }
        return (cnt<=k);
    }
    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end()),r=accumulate(nums.begin(),nums.end(),0);
        while(l<r)
        {
            int mid=(l+r)>>1;
            if(sub(mid,nums,k))
                r=mid;
            else l=mid+1;
        }
        return r;
    }
};