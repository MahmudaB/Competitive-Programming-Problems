#define ll long long
#define mod 1000000007
class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<ll,ll>> adj[n+1];
        for(ll i=0;i<roads.size();i++){
            adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
            adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
        }
         
        priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>>pq;
        
        pq.push({0,0});
        vector<ll>dist(n+1,LLONG_MAX);
        vector<ll>way(n+1,0);
        
        dist[0]=0;
        way[0]=1;
        
        while(!pq.empty())
        {
            ll time=pq.top().first, v=pq.top().second;
            pq.pop();
    
            for(auto it:adj[v])
            {
                ll x=it.first, t=it.second;
                
                if(time+t<dist[x])
                {
                    dist[x]=time+t;
                    pq.push({dist[x],x});
                    way[x]=way[v];
                }
                else if(time+t==dist[x])
                    way[x]=(way[x]+way[v])%mod;
                //cout<<x<<" "<<way[x]<<endl;
            }
        }
        return way[n-1];
    }
};