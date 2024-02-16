#include <bits/stdc++.h> 
int mazeRunner(int n, int m, vector<vector<int>> &maze, vector<int> &start, vector<int> &destination) {
   priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>>pq;
    
    vector<int>dist(n*m+1,INT_MAX);
    dist[start[0]*m+start[1]]=0;
    pq.push({0,{start[0],start[1]}});

    int dx[]={0,0,+1,-1};
    int dy[]={+1,-1,0,0};

    while(!pq.empty())
    {
        int dis=pq.top().first;
        int x=pq.top().second.first, y=pq.top().second.second;
        pq.pop();

        for(int i=0;i<4;i++)
        {
           int newX=x,newY=y;
           int cnt=0;
           while(newX>=0 and newX<n and newY>=0 and newY<m and maze[newX][newY]==0)
           {
               newX+=dx[i];
               newY+=dy[i];
               cnt++;
           }
           
           newX-=dx[i];
           newY-=dy[i];
           cnt--;

           if(dis+cnt<dist[newX*m+newY])
           {
               dist[newX*m+newY]=dis+cnt;
               pq.push({dis+cnt,{newX,newY}});
           }
        }
    }

    if(dist[destination[0]*m+destination[1]]==INT_MAX)
     return -1;
    return dist[destination[0]*m+destination[1]];
}