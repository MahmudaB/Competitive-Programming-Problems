class Solution {
public:
    bool hasPath(vector<vector<int>>& maze,vector<int>&start, vector<int>&des) {
       int n=maze.size();
        int m=maze[0].size();
        queue<pair<int,int>>q;
        
        int vis[n][m];
        memset(vis,0,sizeof vis);
        
        q.push({start[0],start[1]});
        vis[start[0]][start[1]]=1;
        
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
        
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            
            if(x==des[0] and y==des[1])return true;
            
            for(i=0;i<4;i++)
            {
                int newX=x;
                int newY=y;
                while(newX>=0 and newX<n and newY>=0 and newY<m and maze[newX][newY]==0)
                {
                    newX+=dx[i];
                    newY+=dy[i];
                }
                
                newX-=dx[i],newY-=dy[i];
                if(!vis[newX][newY])
                  vis[newX][newY]=1,q.push({newX,newY});  
            }
            
        }
        
        return false;
        
    }
};