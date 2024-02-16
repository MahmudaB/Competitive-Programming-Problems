//In the name of Almighty Allah
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
 
#define nl '\n'
#define pb push_back
#define f first
#define s second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define mod 1000000007
 
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define yes cout << "yes" << endl;
#define no cout << "no" << endl;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

ll pow(ll a,ll n)
{     
      ll res=1;
      while(n)
      {
        if(n%2)res*=a,n--;
        else a*=a,n/=2;
      }
      return res;
}
 
ll gcd ( ll a, ll b ){ return __gcd ( a, b );}
ll lcm ( ll a, ll b ){ return a * ( b / gcd ( a, b ) );}

ll isPrime[1000003];
void Sieve()
{
  for(ll i=0;i<=1000000;i++)
   isPrime[i]=1;
  isPrime[0]=isPrime[1]=0;
  
  for(ll i=2;i*i<=1000000;i++)
  {
    if(isPrime[i])
    {
      for(ll j=i*i;j<=1000000;j+=i)
       isPrime[j]=0;
    }
  }
}

const ll Mx=100010;

vll adj[Mx];
vl dis(Mx,1e18);
vl par(Mx,1e18);

void dijktra(ll src,ll n)
{
  priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
  pq.push({0,src});
  
  par[src]=-1;
  dis[src]=0;
  
  while(!pq.empty())
  {
    ll dist=pq.top().f;
    ll v=pq.top().s;
    pq.pop();
    
    for(auto it:adj[v])
    {
      ll u=it.f,wt=it.s;
      if(dist+wt<dis[u])
      {
        dis[u]=dist+wt;
        par[u]=v;
        pq.push({dis[u],u});
      }
    }
  }
  
}
int main()

{
         fast;
         //Sieve();
         ll t,i,j,x,g,type,n,diff,m;
         cin>>n>>m;
         for(i=1;i<=m;i++)
         {
           int u,v,w;
           cin>>u>>v>>w;
           adj[u].pb({v,w});
           adj[v].pb({u,w});
         }
        
         dijktra(1,n);
         
         
         vl path;
         if(par[n]==1e18)
         {
           cout<<-1<<nl;
         }
       else{
          for(ll u=n;u!=-1;u=par[u])
            path.pb(u);
   
          reverse(all(path));
          for(auto x:path)
            cout<<x<<' ';
          cout<<nl;
        }
    return 0;
}