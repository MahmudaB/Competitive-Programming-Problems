#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int a[n+10],cnt,total=0;
		for(i=1;i<=n;i++)
			cin>>a[i];
		for(i=30;i>=0;i--)
		{
			cnt=0;
			for(j=1;j<=n;j++)
			{
				if(((1<<i)&a[j]))
					cnt++,a[j]=0;
			}
			total+=((cnt-1)*cnt)/2;

		}
		
		cout<<total<<endl;
	}
	return 0;
}
/*//In the name of Almighty Allah
 
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
	int n,i,j,cnt=0,flag=0,k,t,x,y;
	cin>>t;
	while(t--)
	{
       cin>>n;
       int a[n+10],can=false;
      for(i=1;i<=n;i++)
         cin>>a[i];
       for(i=2;i<=n;i++)
       {
       	 if(a[i]>=a[i-1])
       	 {
       	 	can=true;
       	 	break;
       	 }
       }
      cout<<(can==true?"YES":"NO")<<nl;
	}
	return 0;
}*/