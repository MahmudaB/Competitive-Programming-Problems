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
 
ll gcd ( ll a, ll b )
{
    return __gcd ( a, b );
}
ll lcm ( ll a, ll b )
{
    return a * ( b / gcd ( a, b ) );
}

#define mx 53
ll a[mx][mx],I[mx][mx];

void mul(ll A[][mx],ll B[][mx], ll n)
{
  ll i,j,k,c[mx][mx];
  
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      c[i][j]=0;
      for(k=1;k<=n;k++)
      {
        c[i][j]=(c[i][j]+((A[i][k]*B[k][j])%mod))%mod;
      }
    }
  }
  
  for(ll i=1;i<=n;i++)
  {
    for(ll j=1;j<=n;j++)
    A[i][j]=c[i][j];
  }
}
void power(ll A[][mx],ll n, ll p)
{
  ll i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
     I[i][j]=(i==j);
  }
  while(p)
  {
    if(p%2)
    {
      mul(I,A,n);
      p--;
    }
    else{
      mul(A,A,n);
      p/=2;
    }
  }
  for(ll i=1;i<=n;i++)
  {
    for(ll j=1;j<=n;j++)
     A[i][j]=I[i][j];
  }
}

void print(ll A[][mx],ll n)
{
  for(ll i=1;i<=n;i++)
  {
    for(ll j=1;j<=n;j++)
     cout<<A[i][j]<<' ';
    cout<<nl;
  }
}
int main()

{
       fast;
       ll t,i,j,x,g,p,n,k,diff,m;
       cin>>t;
       while(t--)
       { 
         cin>>n>>p;
         for(i=1;i<=n;i++)
         {
           for(j=1;j<=n;j++)
            cin>>a[i][j];
         }
         
         power(a,n,p);
         print(a,n);
       }
        
    return 0;
}