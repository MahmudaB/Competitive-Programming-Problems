//In the name of Almighty Allah
/*
Description

You are given N balls and an integer K. The color of each ball is given in an array A. A basket is filled if it contains at least K balls of different colors. Find the maximum number of filled baskets you can get if you optimally put the balls in the baskets.


Input Format

The first line contains T, the number of test cases (1<=T<=100000).

The first line contains three space-separated integers N, K where 1<=N<=10^5, 1<=K<=N.

Next line contains N space-separated integers (0<=Ai<=1e9).

Sum of N across all test cases <=10^6.


Output Format

For each test case output the maximum number of filled baskets in a new line. 


Sample Input 1

3
5 5
1 2 3 4 5
5 2
1 2 3 4 5
6 3
1 2 2 1 3 3

Sample Output 1

1
2
2
*/
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

const int Mx=1e5+123;
ll a[Mx],n,k;
map<ll,ll>frq;

bool check(ll mid)
{
  ll totalUsefulBall=0;
  
  for(auto x:frq)
   totalUsefulBall+=min(x.s,mid);
  
  return (totalUsefulBall>=(mid*k));
}
int main()

{
         fast;
         //Sieve();
         ll t,i,j,x,g,diff,m;
         cin>>t;
         while(t--)
         { 
           cin>>n>>k;
           frq.clear();
           
           for(i=1;i<=n;i++){
            cin>>a[i];
            frq[a[i]]++;
           }
            
           ll l=0,r=n/k,ans=0;
           while(l<=r)
           {
             ll mid=(l+r)/2;
             if(check(mid))
              ans=mid,l=mid+1;
             else r=mid-1;
           }
           
           cout<<ans<<nl;
         }
        
    return 0;
}
