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
    ll n,i,j,cnt=0,flag=0,k,t,x=1;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	ll a[n+10],total=0;
    	map<ll,ll>m;
    	for(i=1;i<=n;i++){
    		cin>>a[i];
    		m[a[i]]++;
    	}
    	cnt=0,flag=0;
    	for(i=1;i<n;i++)
    	{
    		cnt=0;
    		for(j=i+1;j<=n;j++)
    		{
    			cnt|=a[j];
    			m[cnt]++;
    			if(m[cnt]>1)
    			{
    				flag=1;
    				break;
    			}
    		}
    	 if(flag)break;
    	}
    	cout<<(flag==0?"YES":"NO")<<nl;
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
    ll n,i,j,cnt=0,flag=0,k,t,x=1;
    cin>>t;
    while(t--)
    {
       cin>>n;
       ll a[n+10];
       for(i=1;i<=n;i++)
        cin>>a[i];
       set<ll>s;
       if(n>60)
        cout<<"NO\n";
       else
       {
         for(i=1;i<=n;i++)
         {
            ll cnt=0;
            for(j=i;j<=n;j++)
                cnt|=a[j],s.insert(cnt);
         }
         if(s.size()==(n*(n+1))/2)
            cout<<"YES\n";
         else cout<<"NO\n";
       }
    }
    return 0;
}