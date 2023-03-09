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
       cin>>n;
       int a[n+10];
        for(i=1;i<=n;i++)
        	cin>>a[i];
        a[0]=a[n];
        int mx=a[n]-a[1];
        for(i=1;i<=n;i++)
        {
              mx=max(mx,(a[n]-a[i]));
              mx=max(mx,(a[i-1]-a[i]));
              mx=max(mx,(a[i]-a[1]));
        }
        cout<<mx<<nl;
         
	}
	return 0;
        
}
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
	int n,i,j,cnt=0,flag=0,k,t,x=1,m;
	cin>>t;
	while(t--)
	{
       cin>>n>>m;
       if(n>m || (m%2!=0 && n%2==0))
         No
       else if(n==1)
       	cout<<"Yes\n"<<m<<nl;
       else
       {
       	    Yes
       	    for(i=1;i<n-1;i++)
               cout<<1<<' ';
            if(n%2!=0)
            	cout<<1<<' '<<m-n+1<<nl;
            else
            {
            	k=m-n+2;
            	cout<<k/2<<' '<<k/2<<nl;
            }
       	 
       }
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
	int n,i,j,cnt=0,flag=0,k,t,x=1,m;
	cin>>t;
	while(t--)
	{
       cin>>n>>m;
       int a[n+10][m+10],mx=INT_MIN,h,w;
       for(i=1;i<=n;i++)
       {
       	 for(j=1;j<=m;j++)
       	 {
       	 	cin>>a[i][j];
       	 	if(a[i][j]>mx)
       	 	{
       	 		mx=a[i][j];
       	 		h=i,w=j;
       	 	}
       	 }

       }
       h=max(n-h+1,h),w=max(m-w+1,w);
       cout<<h*w<<nl;
	}
	return 0;
}