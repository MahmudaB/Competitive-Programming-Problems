class Solution {
    public:
    void f(int i, int sum, vector<int>&a,vector<int>v,vector<vector<int>>&ans)
    {
        if(i==a.size())
        {
            if(sum==0)
                ans.push_back(v);
            return ;
        }
        
        if(a[i]<=sum)
        {
            v.push_back(a[i]);
            f(i,sum-a[i],a,v,ans);
            v.pop_back();
        }
        f(i+1,sum,a,v,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>>ans;
        vector<int>v;
        f(0,target,candidates,v,ans);
        
        return ans;
    }
};