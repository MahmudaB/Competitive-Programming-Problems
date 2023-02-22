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
struct info{
  int score,penalty;
};
bool cmp(const info &a,const info &b)
{
  if(a.score>b.score)return true;
  else if(a.score==b.score and a.penalty<b.penalty)return true;
  return false;
}
int main()

{
       fast;
       int t,i,j,x,g,type,n,k,ans=0,m;
       cin>>n>>k;
       vector<info>v;
       info a;
       for(i=1;i<=n;i++)
       {
         cin>>a.score>>a.penalty;
         v.push_back(a);
       }
       sort(v.begin(),v.end(),cmp);
       for(i=0;i<n;i++)
       {
         if(v[k-1].score==v[i].score and v[k-1].penalty==v[i].penalty)
           ans++;
       }
       cout<<ans<<nl;
        
    return 0;
}