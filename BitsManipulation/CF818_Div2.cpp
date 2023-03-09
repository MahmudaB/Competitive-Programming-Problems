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
      cout<<n+(2*(n/2))+(2*(n/3))<<endl;
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
	int n,i,j,cnt=0,flag=0,k,t,x,y,r,c;
	cin>>t;
	while(t--)
	{
       cin>>n>>k>>r>>c;
       --r,--c;
       vector<vector<char>>v(n,vector<char> (n,'.'));
       v[r][c]='X';
       x=r,y=c;
       while(x>=0)
       {
       	 for(i=y;i<n;i+=k)v[x][i]='X';
       	 for(i=y;i>=0;i-=k)v[x][i]='X';	
       	 x=x-1,y=y+1;
       	if(y>=n)
       		y=0;
       }
       x=r,y=c;
       while(x<n)
       {
       	 for(i=y;i<n;i+=k)v[x][i]='X';
       	 for(i=y;i>=0;i-=k)v[x][i]='X';	
       	 x=x+1,y=y-1;
       	if(y<0)
       		y=n-1;
       }
       for(i=0;i<n;i++)
       {
       	 for(j=0;j<n;j++)
       	 	cout<<v[i][j];
       	 cout<<nl;
       }
	}
	return 0;
}