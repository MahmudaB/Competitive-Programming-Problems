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
const int mx=123;
int a[mx];
bool prime(int n)
{
  if(n==1)return false;
  for(int i=2;i*i<=n;i++)
  {
    if(n%i==0)
     return false;
  }
  return true;
}
int main()

{
       fast;
       int t,i,j,x,g,type,n,k,diff,m;
       cin>>t;
       while(t--)
       { 
         cin>>n;
         if(prime(n))
          cout<<n<<" is a Prime Number\n";
         else cout<<n<<" is not a prime number\n";
       }
        
    return 0;
}