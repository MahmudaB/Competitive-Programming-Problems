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

const int mx=123;
ll ar[mx][mx],I[mx][mx],br[mx][mx];

void mul(ll A[][mx],ll B[][mx],ll r,ll c)
{
  ll i,j,l,C[mx][mx];
  for(i=1;i<=r;i++)
  {
    for(j=1;j<=c;j++)
    {
      C[i][j]=0;
      for(l=1;l<=c;l++)
      {
        ll x=(A[i][l]*B[l][j])%mod;
        C[i][j]=(C[i][j]+x)%mod;
      }
    }
  }
  
  for(i=1;i<=r;i++)
  {
    for(j=1;j<=c;j++)
     A[i][j]=C[i][j];
  }
}

void power(ll A[][mx],ll p)
{
  ll i,j;
  for(i=1;i<=2;i++)
  {
    for(j=1;j<=2;j++)
    I[i][j]=(i==j);
  }
  
  while(p)
  {
    if(p%2)mul(I,A,2,2),p--;
    else mul(A,A,2,2),p/=2;
  }
  
  for(i=1;i<=2;i++)
  {
    for(j=1;j<=2;j++)
     A[i][j]=I[i][j];
  }
}
int main()

{
       fast;
       ll t,i,j,x,g,type,n,k,p,m,a,b;
       cin>>t;
       while(t--)
       { 
         cin>>br[1][1]>>br[1][2]>>p;
         ar[1][1]=0;
         ar[1][2]=ar[2][1]=ar[2][2]=1;
         power(ar,p);
         mul(br,ar,1,2);
         cout<<br[1][1]<<nl;
       }
        
    return 0;
}