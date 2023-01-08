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
int main()
{
    fast;
    int n,x,mx=0,i;
    ll ans=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>x;
       mx=max(x,mx);
       ans+=(mx-x);
    }
    cout<<ans;
  return 0;
}