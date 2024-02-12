//In the name of Almighty Allah
#include<bits/stdc++.h>
using namespace std;
 
#define nl '\n'
#define pb push_back
#define f first
#define s second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
 

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

const int Mx=123;
vector<int> adj[Mx];
int vis1[Mx],vis2[Mx];

bool dfsCycle(int node)
{
  vis1[node]=1;
  vis2[node]=1;
  
  for(auto nei:adj[node])
  {
    if(vis1[nei]==0)
    {
      if(dfsCycle(nei))
       return true;
    }
    else if(vis2[nei])
       return true;
  }
  vis2[node]=0;
  return false;
}
int main()

{
         fast;
         //Sieve();
         int t,i,j,x,g,type,n,k,diff,m;
         cin>>n>>m;
         for(i=1;i<=m;i++)
         {
           int u,v;
           cin>>u>>v;
           adj[u].pb(v);
         }
         
         int f=0;
         for(i=1;i<=n;i++)
         {
           if(vis1[i]==0)
           {
             if(dfsCycle(i))
             {
               f=1;
               break;
             }
           }
         }
         
         if(f)cout<<"Cycle is detected\n";
         else cout<<"NO cycle detect\n";
        
    return 0;
}