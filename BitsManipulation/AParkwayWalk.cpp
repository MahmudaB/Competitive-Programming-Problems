//In the name of Almighty Allah
/*
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
	int n,i,j,cnt=0,flag=0,k,t,x=1;
	cin>>t;
	while(t--)
	{
       cin>>n>>k;
       int a[n+10],sum=0;
       for(i=1;i<=n;i++)
       {
       	 cin>>a[i];
       	 sum+=a[i];
       }
       cout<<max(sum-k,0)<<nl;

	}
	return 0;
}*/
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
	ll n,i,j,cnt=0,flag=0,k,t;
       cin>>n>>k;
       ll a[n+10],pr[n+10]={0};
       for(i=1;i<=n;i++)
       	 cin>>a[i];
       sort(a+1,a+n+1,greater<ll>());
       for(i=1;i<=n;i++)
       	pr[i]=pr[i-1]+a[i];
       while(k--)
       {
       	 ll x,y;
       	 cin>>x>>y;
       	 cout<<pr[x]-pr[x-y]<<endl;

       }
	
	return 0;
}