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
int sub(int mid,int a[],int n)
{
  int cnt=0,sum=0;
  for(int i=0;i<n;i++)
  {
      sum+=a[i];
      if(sum>=mid)
       cnt++,sum=0;
  }
  return cnt;
}
int main()

{
         fast;
         //Sieve();
         int t,i,j,x,g,type,n,k,diff,m;
         cin>>t;
         while(t--)
         { 
            cin>>n>>k;
            int r=0;
            for(i=0;i<n;i++){
             cin>>a[i];
             r+=a[i];
            } 
            
            int l=*min_element(a,a+n),ans;
            while(l<=r)
            {
               int mid=(l+r)>>1;
               if(sub(mid,a,n)>=(k+1))
               {
                 ans=mid;
                 l=mid+1;
               }
               else r=mid-1;
            }
            
            cout<<ans<<nl;
         }
        
    return 0;
}