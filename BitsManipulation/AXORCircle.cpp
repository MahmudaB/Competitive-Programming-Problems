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
	int n,i,j,cnt=0,flag=0,k,t;
	cin>>n;
	ll a[n+10];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	a[n+1]=a[1];
	a[n+2]=a[2];
	for(i=2;i<n+2;i++)
	{
		if(a[i]!=(a[i+1]^a[i-1]))
		{
			cnt=1;
			break;
		}
	}
	cout<<(cnt==0?"YES":"NO")<<nl;
	return 0;
}