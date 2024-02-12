struct node{
    int x;
    int y;
    int time;
    node(int _x,int _y,int _time){
        x=_x;
        y=_y;
        time=_time;
    }
    
};
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n=grid.size(),m=grid[0].size();
        int cnt=0,ans=0,CntOrange=0;
        queue<node>q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                if(grid[i][j]==2)
                    q.push(node(i,j,0));
                if(grid[i][j]!=0)CntOrange++;
            }
        }
        int dx[]={0,-1,+1,0};
        int dy[]={-1,0,0,+1};
        
        while(!q.empty())
        {
            int x=q.front().x;
            int y=q.front().y;
            int time=q.front().time;
            q.pop();
            
            ans=max(ans,time);
            cnt++;
            
            for(int ind=0;ind<4;ind++)
            {
                int newX=x+dx[ind];
                int newY=y+dy[ind];
                if(newX>=0 and newX<n and newY>=0 and newY<m and grid[newX][newY]==1){
                    q.push(node(newX,newY,time+1));
                    grid[newX][newY]=2;
                }
                
            }
        }
        if(CntOrange==cnt)return ans;
        return -1;
    }
};