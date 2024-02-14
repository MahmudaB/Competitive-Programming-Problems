
bool dfs(int v,vector<int>&vis,vector<int>&path, vector<int>adj[])
{
    vis[v]=path[v]=1;
    for(auto u:adj[v])
    {
        if(vis[u]==0)
        {
            if(dfs(u,vis,path,adj))
                return true;
        }
        else if(path[u]==1)
            return true;
    }
    path[v]=0;
    return false;
}
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        int n=numCourses,m=prerequisites.size();
        
        vector<int>adj[n];
        for(int i=0;i<m;i++)
        {
          adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        
        vector<int>vis(n,0),path(n,0);
        int f=1;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0){
              if(dfs(i,vis,path,adj))
               return false;
           }
        }
        
        return true;
        
    }
};