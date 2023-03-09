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
	int n,i,j,flag=0,k,t,x=1;
	cin>>t;
	while(t--)
	{
       cin>>n;
       int a[n+10][n+10]={0},cnt=1;
       for(i=1;i<=n;i++)
       {
       	 for(j=1;j<=n;j++)
       	 {
       	 	if(a[i][j]==0)
       	 	{
       	 		int a1=i,b=j;
       	 		while(a1<=n && b>=1)
       	 		{
       	 			a[a1][b]=cnt,cnt++;
       	 			a1++,b--;

       	 		}
       	 	}
       	 }
       }
       for(i=1;i<=n;i++)
       {
       	for(j=1;j<=n;j++)
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
    int n,i,j,cnt=0,flag=0,k,t;
    cin>>n;
    if(n%2==0 && n!=2)
        YES
    else NO
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
    ll n,i,j,cnt=0,flag=0,k,t,a;
    cin>>t>>a>>k;
    if(k<=t)
    {
        t-=k;
        cout<<t<<' '<<a<<endl;
    }
    else
    {
        k-=t;
        if(a>=k)
        {
            a-=k;
            cout<<0<<' '<<a<<endl;
        }
        else 
        {
            cout<<0<<' '<<0<<endl;
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
    int n,i,j,cnt=0,flag=0,k,t;
    cin>>n;
    int len=2*n-1;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
           int min= i<j?i:j;
           min=min<len-i?min:len-i-1;
           min=min<len-j?min:len-j-1;
           cout<<n-min<<" ";
        }
        cout<<endl;
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
    int n,i,j,cnt=0,flag=0,k,t;
    char s;
    cin>>s;
    double m[13][13];
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
           cin>>m[i][j];
        }
    }
    double sum=0.0,ave=0.0;
    k=-1;
    for(i=11;i>=7;i--)
    {
        k++;
        for(j=k+1;j<11-k;j++)
        {
           sum+=m[j][i];
        }
    }
    if(s=='S')
        printf("%.1lf\n", sum);
    else printf("%.1lf\n", sum/30.0);
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
    ll n,i,j,cnt=0,flag=0,k,t,x=1;
    cin>>t;
    while(t--)
    {
       cin>>n>>k;
       ll a[n+10],mx=0;
       for(i=1;i<=n;i++){
        cin>>a[i];
        mx=max(mx,(k|a[i]));
        }
    cout<<mx<<endl;
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
    int n,i,j,k,t,x=1;
    cin>>t;
    while(t--)
    {
       cin>>n;
       std::vector<int> v(n);
      for(i=0;i<n;i++){
         cin>>v[i];
      }
      while(v.size()>0 && v[0]==0)v.erase(v.begin());
      while(v.size()>0 && v[v.size()-1]==0)v.pop_back();
      int zero=0;
      for(i=0;i<v.size();i++)
      {
        if(v[i]==0)
            zero++;
      }
       if(v.size()==0)
        cout<<0<<nl;
      else if(zero!=0)
         cout<<2<<nl;
     else cout<<1<<nl;
    }
    return 0;
}