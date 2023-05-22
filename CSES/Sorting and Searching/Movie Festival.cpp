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
int main()

{
       fast;
       int t,i,j,g,type,n,a,b;
       vector<pair<int,int>>v ;
       cin>>t;
       while(t--)
       {
         cin>>a>>b;
         v.push_back({b,a});
       }
       sort(v.begin(),v.end());
         
        ll cnt=1,x=v[0].first;
        for(i=1;i<v.size();i++){
         if(v[i].second>=x)x=v[i].first,cnt++;
        }
       
        cout<<cnt<<nl;
        
    return 0;
}