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
	ll n,i,j,flag=0,k,t,x=1;
	cin>>t;
	while(t--)
	{
       cin>>n;
       ll cnt=0, a[n+10];
       for(i=1;i<=n;i++){
       	cin>>a[i];
       	cnt^=(2*a[i]);
       }
       cout<<cnt<<endl;
	}
	return 0;
}