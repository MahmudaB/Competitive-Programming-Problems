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
	int n,i,j,cnt=0,flag=0,k,t,x=1,m;
	cin>>t;
	while(t--)
	{
       cin>>n>>m;
       if(n==1 && m==1)
       	cout<<0<<endl;
       else cout<<min(((m-1)+(n-1)+(n-1)+1),(n+(m-2)+(m-2)+2))<<endl;
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,b,n,s,t,i;
    cin>>t;
    while(t--)
    {
     cin>>n>>k>>b>>s;
     long long a[n+10]={0};
     if(s<(b*k) || s>(k*b+n*(k-1)))
     cout<<-1<<endl;
     else 
     {
          a[0]=k*b;
          s=s-(k*b);
          if(s>0)
            {
              a[0]=a[0]+min(s,(k-1));
              s=s-(min(s,(k-1)));
            }
         for(i=1;i<n;i++)
         {
            if(s>0)
            {
              a[i]=min(s,(k-1));
             s=s-(min(s,(k-1)));
            }
            else
            a[i]=0;
            //cout<<a[i]<<endl;
        }
       for(i=0;i<n;i++)
         cout<<a[i]<<' ';
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
	ll n,i,j,cnt=0,flag=0,k,t,x=1,a,b,c,d;
	cin>>t;
	while(t--)
	{
       cin>>a>>b>>c>>d;
       x=a*d,k=b*c;
       //cout<<x<<' '<<k<<endl;
       if(x==k)
       	cout<<0<<endl;
       else if((k!=0 && x%k==0)||(x!=0 && k%x==0))
       	cout<<1<<endl;
       else cout<<2<<endl;
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
       for(i=0;i<n;i++)
       	cin>>a[i];
       sort(a,a+n);
       cnt=(a[n-1]+a[n-2])-(a[1]+a[0]);
       cout<<cnt<<endl;
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
	int n,i,j,cnt=0,flag=0,k,t,H,M,h1,m1,x;
	cin>>t;
	while(t--)
	{
       cin>>n>>H>>M;
       H=H*60+M;
       int ans=24*60;
       for(i=0;i<n;i++)
       {
       	 cin>>h1>>m1;
       	 h1=h1*60+m1;
         x=h1-H;
         if(x<0)
         	x+=24*60;
         ans=min(ans,x);
       }
       cout<<ans/60<<' '<<ans%60<<endl;
	}
	return 0;
}*/
