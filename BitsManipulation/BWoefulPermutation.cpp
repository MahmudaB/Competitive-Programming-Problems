/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,b,n,s,t,i,x,yd;
     cin>>t;
    while(t--)
    {
     cin>>n;
     int a[n+10];
     for(i=1;i<=n;i++)
     	a[i]=i;
     for(i=n;i>1;i-=2)
     	swap(a[i],a[i-1]);
     for(i=1;i<=n;i++)
     	cout<<a[i]<<' ';
     cout<<endl;
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
	int n,i,j,flag=0,k,t,x=1;
	cin>>t;
	while(t--)
	{
       cin>>n>>k;
       int a[n+10],cnt=0;
       for(i=1;i<=n;i++)
       	cin>>a[i];
       for(i=1;i<=k;i++)
       {
       	 if(a[i]>k)
       	 	cnt++;
       }
       cout<<cnt<<endl;
	}
	return 0;
}