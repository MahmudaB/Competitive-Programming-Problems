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
	int n,i,j,cnt=0,flag=0,k,t,x;
	cin>>t;
	while(t--)
	{
		int sum=0;
      for(i=1;i<=4;i++)
      		cin>>x,sum+=x;
      if(sum==0)
      	cout<<0<<endl;
      else if(sum==4)
      	cout<<2<<endl;
      else cout<<1<<endl;
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
	ll n,i,j,cnt=0,flag=0,k,t,x,m;
	cin>>t;
	while(t--)
	{
       cin>>n>>m;
       ll sum=(m*(m+1))/2;
       sum+=m*n*(n+1)/2-m;
       cout<<sum<<endl;
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
	int n,i,j,cnt=0,flag=0,k,t,x,m;
	cin>>t;
	while(t--)
	{
       cin>>n>>m;
       int a[n+10][m+10];
       a[1][1]=0,a[1][2]=1;
       for(i=3;i<=m;i++)
       {
       	 if(i%2==0)
       	 {
       	 	if(a[1][i-2]==0)
       	 		a[1][i]=1;
       	 	else a[1][i]=0;
       	 }
       	 else
       	 	a[1][i]=a[1][i-1];
       }
       for(i=2;i<=n;i++)
       {
       	 for(j=1;j<=m;j++)
       	 {
       	 	if(i%2==0)
       	    {
       	    	if(a[i-1][j]==1)
       	    		a[i][j]=0;
       	    	else a[i][j]=1;
       	    }
       	    else
       	     a[i][j]=a[i-1][j];
       	 }
       }
       for(i=1;i<=n;i++)
       {
       	for(j=1;j<=m;j++)
       		cout<<a[i][j]<<' ';
       	cout<<endl;
       }
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
	int n,j,cnt=0,flag=0,k,t,x=1;
	cin>>t;
	while(t--)
	{
       cin>>n;
       if(n%2)
       	cout<<-1<<endl;
       else cout<<n/2<<" 0 0\n";
       
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
	int n,i,j,cnt=0,flag=0,k,t,x=1;
	cin>>t;
	while(t--)
	{
       cin>>n;
       int a[n+10];
      for(i=1;i<=n;i++)
      	cin>>a[i];
      cout<<a[n]<<endl;
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
	int n,i,j,cnt=0,flag=0,k,t,x=1;
	cin>>t;
	while(t--)
	{
       cin>>n>>k;
       int a[n+10],cnt=0;
       for(i=1;i<=n;i++)
       	cin>>a[i];
       	for(i=2;i<n;i++)
       	{
           if(a[i]>(a[i-1]+a[i+1]))
           	cnt++;
       	}
       	if(k==1)
       		cout<<(n-1)/2<<endl;
       	else cout<<cnt<<endl;
	}
	return 0;
}