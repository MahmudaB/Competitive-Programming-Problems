//In the name of Almighty Allah
/*
Description

Given a binary array of length N. The score of an array is the length of the longest continuous subsegment consisting of only one.

Find the maximum score possible if you can change at most K elements of the array.


Input Format

The first line contains an integer T, the number of test cases.
The first line of each test case contains two space-separated integer N, K where 
The next line contains N space-separated integers which are either 0 or 1.


Output Format

For each test case print the maximum score possible if you can change at most K elements of the array in a new line.


Constraints

1 ≤ T ≤ 104
1 ≤ N ≤ 105
0 ≤ K ≤ N
Sum of N across all test cases ≤ 106.


Sample Input 1

5
10 2
1 0 1 1 0 1 1 0 0 1
10 1
1 1 0 1 0 0 0 1 0 0
10 3
1 0 0 1 1 0 1 1 0 1
10 3
1 1 1 0 0 0 1 1 1 1
10 3
1 1 0 0 1 1 0 0 1 1

Sample Output 1

7
4
8
10
7
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
ll a[Mx],pr[Mx],n,k;

bool check(int mid)
{
  for(int i=1;i<=(n-mid+1);i++)
  {
    int s=pr[mid+i-1]-pr[i-1];
    //cout<<s<<' '<<mid<<' ';
    if(mid-s<=k)return 1;
  }
  return 0;
}
int main()

{
         fast;
         //Sieve();
         ll t,i,j,x,g,type,diff,m;
         cin>>t;
         while(t--)
         { 
            cin>>n>>k;
            mem(pr,0);
            for(i=1;i<=n;i++){
             cin>>a[i];
             pr[i]=pr[i-1]+a[i];
           }
           
           ll l=0,r=n,ans=pr[n];
           while(l<=r)
           {
             int mid=(l+r)/2;
             if(check(mid))
              ans=mid,l=mid+1;
             else r=mid-1;
           }
           
           cout<<ans<<nl;
         }
        
    return 0;
}