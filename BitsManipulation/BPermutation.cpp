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
       map<ll,ll>m;
       cout<<2<<endl;
       for(i=1;i<=n;i+=2)
       {
       	for(j=i;j<=n;j*=2)
       		cout<<j<<' ';
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
	int n,i,j,cnt=0,flag=0,k,t,x=1;
	cin>>t;
	while(t--)
	{
       cin>>n;
       string s;
       int cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0;
       cin>>s;
       for(i=0;i<s.size();i++)
       {
       	 if(s[i]=='T')cnt1++;
       	 else if(s[i]=='i')cnt2++;
       	 else if(s[i]=='m')cnt3++;
       	 else if(s[i]=='u')cnt4++;
       	 else if(s[i]=='r')cnt5++;
       }
       cout<<(cnt1==1 && cnt2==1 && cnt3==1 && cnt4==1 && cnt5==1 && n==5?"YES":"NO")<<endl;
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
       string s,t;
       cin>>s>>t;
       flag=0;
       for(i=0;i<n;i++)
       {
         if(s[i]=='R')
         {
            if(t[i]!='R')
               flag=1;
        }
         else
         {
            if(t[i]=='R')
                flag=1;
         }
       }
       cout<<(flag==1?"NO":"YES")<<endl;
    }
    return 0;
}
//In the name of Almighty Allah
/**C

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
       vector<pair<int,string>>v;
       map<string,int>m;
       int sum1=0,sum2=0,sum3=0;
       for(i=0;i<3;i++)
       {
       	 for(j=0;j<n;j++)
       	 {
       	 	string s;
       	 	cin>>s;
       	 	m[s]++;
       	 	v.push_back({i+1,s});
       	 }
       }
       sort(v.begin(),v.end());
      for(auto x:v)
      {
      	//cout<<x.first<<' '<<x.second<<endl;
      	if(x.first==1)
      	{
            if(m[x.second]==1)
            	sum1+=3;
            else if(m[x.second]==2)
            	sum1+=1;
      	}
      	else if(x.first==2)
      	{
             if(m[x.second]==1)
            	sum2+=3;
            else if(m[x.second]==2)
            	sum2+=1;
      	}
      	else
      	{
            if(m[x.second]==1)
            	sum3+=3;
            else if(m[x.second]==2)
            	sum3+=1;
      	}
      }
      cout<<sum1<<' '<<sum2<<' '<<sum3<<endl;
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
       map<string,int>m;
       string s[4][n];
       for(i=0;i<3;i++)
       {
            for(j=0;j<n;j++)
            {
                cin>>s[i][j];
                m[s[i][j]]++;
            }
       }
        for(i=0;i<3;i++)
       {
         int sum=0;
         for(j=0;j<n;j++)
         {
           if(m[s[i][j]]==1)
            sum+=3;
           if(m[s[i][j]]==2)
            sum+=1;
         }
         cout<<sum<<' ';
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
    ll n,i,j,cnt=0,flag=0,k,t,x=1;
    cin>>t;
    while(t--)
    {
       cin>>n;
       if(n%2)
        cout<<-1<<endl;
       else if(n%4==0 && n%6==0)
        cout<<n/6<<' '<<n/4<<endl;
       else{
         if(n%6)
         cout<<(n/6)+1<<' '<<n/4<<endl;
         else
            cout<<n/6<<' '<<n/4<<endl;
       }
    }
    return 0;
}

//In the name of Almighty Allah

/** D.LINE
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
    ll n,i,j,cnt=0,flag=0,k,t,sum,x=1;
    string a;
    cin>>t;
    while(t--)
    {
     cin>>n>>a;
    vector<int>ch(n+10);
     k=n-1,sum=0;
     for(i=0;i<n;i++)
     {
       if(a[i]=='L')
        sum+=i,ch[i]=(k-i)-i;
       else sum+=(k-i),ch[i]=i-(k-i);
    }
    sort(ch.begin(),ch.end(),greater<ll>());
    for(i=0;i<n;i++)
    {
      if(ch[i]>0)
        sum+=ch[i];
     cout<<sum<<' ';
    }

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
    ll n,i,j,cnt=0,flag=0,k,t,q;
    cin>>t;
    while(t--)
    {
       cin>>n>>q;
       ll x[n+10],y[n+10];
       for(i=1;i<=n;i++)
        cin>>x[i]>>y[i];
       while(q--)
       {
         ll h1,h2,w1,w2,mul=0;
         cin>>h1>>w1>>h2>>w2;
         for(i=1;i<=n;i++)
         {
             if(x[i]>h1 && x[i]<h2 && y[i]>w1 && y[i]<w2)
                mul+=(x[i]*y[i]);
         }
         cout<<mul<<endl;
       }
    }
    return 0;
}