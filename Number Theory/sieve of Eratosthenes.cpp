//In the name of Almighty Allah
#include<bits/stdc++.h>

using namespace std;

#define mod 1e9+7

#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define case(z) cout<<"Case "<<z<<": "

#define ll long long

#define nl "\n"

#define NO cout << "NO" << endl;

#define Yes cout << "Yes" << endl;

#define No cout << "No" << endl;

#define yes cout << "yes" << endl;

#define no cout << "no" << endl;

#define YES cout << "YES" << endl;
ll gcd(ll a,ll b){
	 return __gcd(a,b);
}

ll lcm(ll a,ll b){
	 return (a*(b/gcd(a,b)));
}
const int mx=1e6+123;
ll isPrime[mx];

void sieve()
{
  for(ll i=0;i<=mx;i++)
   isPrime[i]=1;
   
  isPrime[0]=isPrime[1]=0;
  
  for(ll i=2;i*i<=mx;i++)
  {
    if(isPrime[i])
    {
      for(ll j=i*i;j<=mx;j+=i)
       isPrime[j]=0;
    }
  }
  
  /*for(ll i=1;i<=mx;i++)
  {
    if(isPrime[i])
     cout<<i<<' ';
  }
  cout<<nl;*/
}
int main()

{
       fast;
       int t,i,j,x,g,type,n,k,diff,m;
       sieve();
       
       cin>>t;
       while(t--)
       { 
         cin>>n;
         if(isPrime[n])
          cout<<n<<" is a prime\n";
         else cout<<n<<" is not a prime\n";
       }
        
    return 0;
}