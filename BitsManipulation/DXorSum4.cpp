//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
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
	ll n,i,j,total=0,k,t,x=1,one=0,zero=0;
       cin>>n;
      ll a[n+10];
    for(i=1;i<=n;i++)
    	cin>>a[i];
    for(i=0;i<60;i++)
    {
    	one=0,zero=0,k=(1LL<<i);
    	for(j=1;j<=n;j++)
    	{
    		if(a[j]&k)one++;
    		else zero++;
    	}
    	k=k%mod;
    	ll cnt=(zero*one)%mod;
    	total=(total+((cnt*k)%mod))%mod;
    	//cout<<total<<' '<<i<<' '<<zero<<' '<<one<<endl;
    }
    cout<<total<<endl;
	return 0;
}