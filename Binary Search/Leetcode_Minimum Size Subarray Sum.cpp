class Solution {
public:
    int Sum(int mid,vector<int>& nums)
    {
           int Sum=0,mxSum=0,i;
           for(i=0;i<mid;i++)
              mxSum+=nums[i];
           Sum=mxSum;
           for(i=mid;i<nums.size();i++)
           {
               Sum=Sum+nums[i]-nums[i-mid];
               mxSum=max(mxSum,Sum);
           }
        return mxSum;
    }
    int minSubArrayLen(int target, vector<int>& nums) {
       
       int l=1,r=nums.size()+1,ans=0;
       while(l<r)
       {
           int mid=(l+r)>>1;
           
           if(Sum(mid,nums)>=target)
           {
               ans=mid;
               r=mid;
           }
           else l=mid+1;
       }
       return ans;
    }
};