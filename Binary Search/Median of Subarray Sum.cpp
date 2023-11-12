//In the name of Almighty Allah
/*
Description

Given an array of N integers A. The score of a subarray is the sum of all integers in the subarray. Mr.X calculated the score of all N*(N+1))/2 subarray. Mr.X wants you to find the median of the array containing the score of all the subarray.

 

Note: The median of a sequence is the value that is in the middle when the sequence is sorted. If the length of the sequence is even, there are two values in the middle and the median is the smaller of these values (or either when they are equal).


Input Format

The first line contains an integer T, the number of test cases (1<=T<=10000).

The first line of each test case contains an integer N where (1<=N<=10^5).

Next line contains N space-separated integers (0<=Ai<=1e9).

Sum of N across all test cases ≤ 10^6.


Output Format

For each test case output the median of the array containing the score of all the subarray in a new line.


Sample Input 1

5
3
1 2 3
1
5
2
1 5
10
1 2 2 3 3 4 5 4 6 7
15
100 222 333 511 555 232 444 555 777 888 999 1000 1112 12345 123456

Sample Output 1

3
5
5
13
3629
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

bool check(ll mid)
{
  ll i=0,j=0,sum=0,cnt=0;
  while(j<n)
  {
    sum+=a[j];
    while(i<=j and sum>mid)
    {
      sum-=a[i];
      i++;
    }
    cnt+=(j-i+1);
    j++;
  }
  
  return (cnt>=k);
}
int main()

{
         fast;
         //Sieve();
         ll t,i,j,x,diff,m;
         cin>>t;
         while(t--)
         { 
            cin>>n;
            ll sum=0;
            for(i=0;i<n;i++)
             cin>>a[i],sum+=a[i];
            
            x=(n*(n+1))/2,k=(x+1)/2; /// k th element is median
            
            ll l=*min_element(a,a+n),r=sum,ans=r;
            while(l<=r)
            {
              ll mid=(l+r)/2;
              if(check(mid))
               ans=mid,r=mid-1;
              else l=mid+1;
            }
            
            cout<<ans<<nl;
         }
        
    return 0;
}