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
        if(n%2)res=(res*a)%mod,n--;
        else a=(a*a)%mod,n/=2;
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

#define mx 10000000
ll p[mx+10],a[mx+10];

void sieve()
{
  ll i,j;
  for(i=1;i<=mx;i++)
   p[i]=i;
   
   for(i=2;i*i<=mx;i++)
   {
     if(p[i]==i)
     {
       for(j=i*i;j<=mx;j+=i)
       {
         if(p[j]==j)
          p[j]=i;
       }
     }
   }
}
int main()

{
       fast;
       sieve();
       ll t,i,j,x,type,n,k,g=0,m;
       map<ll,ll>m1,m2,res;
       
       cin>>t;
       for(j=1;j<=t;j++)
       { 
         cin>>n;
         for(i=1;i<=n;i++)
         {
           cin>>x;
           while(x>1)
           {
             m2[p[x]]++;
             x/=p[x];
           }
         }
        
         for(auto x:m2)
         {
           ll cnt=min(x.s,m1[x.f]);
           while(cnt)
            res[x.f]++,cnt--;
         }
         if(j==1)res=m2;
         m1=res;
         m2.clear();
         res.clear();
       }
       k=1;
       for(auto x:m1)
       {
         k=(k*pow(x.f,x.s))%mod;
       }
       cout<<k<<nl;
    return 0;
}