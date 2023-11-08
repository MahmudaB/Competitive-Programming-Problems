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

vi Rdp(100,-1), Idp(100,-1);

// Recursion DP
int RecDP(int n)
{
  if(n<=2)return 1;
  else if(Rdp[n]!=-1)
   return Rdp[n];
  Rdp[n]=RecDP(n-1)+RecDP(n-2);
  return Rdp[n];
}

int main()
{
         fast;
         //Sieve();
         int t,i,j,x,g,type,n,k,diff,m;
         cin>>n;
         cout<<RecDP(n)<<nl;  // top down Approach
         
         //Iteretive DP
         cin>>n;
         //Bottom UP Approach
         Idp[1]=Idp[2]=1;
         for(i=3;i<=n;i++)
          Idp[i]=Idp[i-1]+Idp[i-2];
         cout<<Idp[n]<<nl;
        
    return 0;
}