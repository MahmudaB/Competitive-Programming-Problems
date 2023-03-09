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
	int n,i,j,cnt=0,k,t,x;
	cin>>t;
	while(t--)
	{
       cin>>n>>x;
       int flag=0;
       std::vector<int> v(2*n);
       for(i=0;i<2*n;i++)
       	cin>>v[i];
       sort(v.begin(),v.end());
       for(i=0;i<n;i++)
       {
       	if((v[n+i]-v[i])<x)
       	 flag=1;
       }
       if(flag)NO
       	else YES
	}
	return 0;
}
*/

//B. Mark the Dust Sweeper
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
       ll a[n+10],cnt=0,zero=0;
       for(i=0;i<n;i++)
       {
       	 cin>>a[i];
       }
       for(i=0;i<n-1;i++)
       {
       	 if(a[i]>0)cnt+=a[i];
       	 else if(cnt>0) zero++;
       }
       cout<<cnt+zero<<endl;
	}
	return 0;
}