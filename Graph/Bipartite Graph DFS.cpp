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

const int Mx=123;
int a[Mx];

vi adj[Mx];
int col[Mx];

bool CheckBipartiteDfs(int v,int color)
{
  col[v]=color;
  for(auto u:adj[v])
  {
    if(col[u]==-1)
    {
      if(!CheckBipartiteDfs(u,!color))
        return false;
    }
    else if(col[u]==color)
     return false;
  }
  return true;
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
           adj[v].pb(u);
         }
         
         int f=1;
         memset(col,-1,sizeof(col));
         
         for(i=1;i<=n;i++)
         {
           if(col[i]==-1){
             if(CheckBipartiteDfs(i,1)==0)
             {
               f=0;
               break;
             }
           }
         }
         if(f)cout<<"The graph is bipartite\n";
         else cout<<"No bipartite hence cycle is odd lenght\n";
    return 0;
}