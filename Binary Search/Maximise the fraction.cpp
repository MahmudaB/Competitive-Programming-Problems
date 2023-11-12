//In the name of Almighty Allah
/*
Description

Given two arrays A and B of size N and an integer K. You have to select K indexes i1,i2,i3....iK such that 

(A[i1]+A[i2]+A[i3]+……+A[iK]) / (B[i1]+B[i2]+B[i3]+……+B[iK]) is maximum.


Input Format

The first line contains T, the number of test cases (1<=T<=10000).

The first line contains an integer N, K where 1<=N<=10^4, 1<=K<=N.

Next line contains N space-separated integers (1<=Ai<=1e4).

Next line contains N space-separated integers (1<=Bi<=1e4).

Sum of N across all test cases<=10^5.


Output Format

For each test case print the maximum possible value of (A[i1]+A[i2]+A[i3]+……+A[iK]) / (B[i1]+B[i2]+B[i3]+……+B[iK]). You have to print the result round off to 6 decimal places.


Sample Input 1

3
3 2
10 9 7
3 5 4
8 3
4 4 2 1 5 3 2 5
2 2 2 5 3 5 2 3
1 1
1 
1

Sample Output 1

2.428571
1.857143
1.000000
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
typedef long double ld;
 
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
#define fraction() cout.unsetf(ios::floatfield); cout.precision(6); cout.setf(ios::fixed,ios::floatfield);
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

const int Mx=1e4+123;
ll a[Mx],b[Mx],n,k;

bool check(ld mid)
{
    priority_queue<ld,vector<ld>,greater<ld>>p;
    for(ll i=1;i<=n;i++)
    {
        p.push(a[i]-mid*b[i]);
        if(p.size()>k)
         p.pop();
    }
    ld s=0;
    while(!p.empty()){
     s+=p.top();
     p.pop();
   }
   return (s>=0);
    
}
int main()

{
         fast;
         //Sieve();
         ll t,i,j,x,g,diff,m;
         fraction();
         cin>>t;
         while(t--)
         { 
            cin>>n>>k;
            for(i=1;i<=n;i++)
             cin>>a[i];
            for(i=1;i<=n;i++)
             cin>>b[i];
            
            ld l=0,r=1e8,ans=0;
            while(abs(r-l)>=1e-9)
            {
              ld mid=(l+r)/2;
              if(check(mid))
               l=mid;
              else r=mid;
            }
            cout<<(l+r)/2<<nl;
            
         }
        
    return 0;
}