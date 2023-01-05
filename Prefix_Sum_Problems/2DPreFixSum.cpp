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
const int mx=1e3+123;
int arr[mx][mx],pre[mx][mx];
int main()
{
       fast;
       ll n,q,i,j,a,b,c,d;
       cin>>n;
       for(i=1;i<=n;i++)
       {
         for(j=1;j<=n;j++)
         {
           cin>>arr[i][j];
           pre[i][j]=arr[i][j]+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];
         }
       }
       cin>>q;
       while(q--)
       {
         cin>>a>>b>>c>>d;
         cout<<(pre[c][d]+pre[a-1][b-1]-pre[a-1][c]-pre[c][b-1])<<nl;
       }
    return 0;
}