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
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
 
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
 
ll gcd ( ll a, ll b )
{
    return __gcd ( a, b );
}
ll lcm ( ll a, ll b )
{
    return a * ( b / gcd ( a, b ) );
}

const int mx=2e5+123;
vector<ll>g[mx];
vector<ll>leaf;

void dfs(ll v,ll par)
{
  bool hasChild=false;
  for(auto x:g[v])
  {
    if(x==par)continue;
    hasChild=true;
    dfs(x,v);
    leaf[v]+=leaf[x];
  }
  if(!hasChild)
   leaf[v]=1;
}

int main()

{
       fast;
       ll t,i,j,x,u,v,n,k,q;
       cin>>t;
       while(t--)
       { 
         cin>>n;
         
         for(i=1;i<=n;i++)
          g[i].clear();
         leaf.assign(n+2,0);
         
         for(i=1;i<n;i++)
         {
           cin>>u>>v;
           g[u].pb(v);
           g[v].pb(u);
         }
         
         dfs(1,-1);
         cin>>q;
         while(q--)
         {
           cin>>u>>v;
           cout<<leaf[u]*leaf[v]*1LL<<nl;
         }
         
       }
        
    return 0;
}