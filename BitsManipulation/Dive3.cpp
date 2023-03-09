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
	ll n,i,j,k,t,x=1;
	cin>>t;
	while(t--)
	{
       cin>>n;
       ll a[n+10],cnt=0,cnt1=0;
       map<ll,ll>m,cn;
       for(i=1;i<=n;i++)
       {
       	cin>>a[i];
       	m[a[i]]++;
       }
       for(i=1;i<=n;i++)
       {
          if(m[a[i]]>1 && cn[a[i]]==0)cnt+=(m[a[i]]-1),cn[a[i]]=1;
       }
       for(i=1;i<=n;i++)
       {
       	 if(m[a[i]]>1)
       	 {
       	 	cnt--;
       	 	cnt1++;
       	 	m[a[i]]--;
       	 }
       	 else if(m[a[i]]==1 && cnt!=0)
       	 	cnt1++;
       }
       cout<<cnt1<<nl;
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
       if(n>=1 && n<=9)
       	cout<<n<<endl;
       else
       {
       	 i=9;
       	 std::vector<int> v;
       	 while(n)
       	 {
       	 	n-=i;
       	 	if(n>=0)
       	 		v.push_back(i);
       	 	else
       	 		n+=i;
       	 	i--;
       	 }
       	 reverse(v.begin(),v.end());
       	 for(auto x:v)
       	 	cout<<x;
       	 cout<<endl;
       }
	}
	return 0;
}*/
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
	int i,j,cnt=0,flag=0,k,t,x=1;
	cin>>t;
	while(t--)
	{
		string n;
       cin>>n>>k;
       std::vector<string> s(k+10);
       flag=0;
       for(i=1;i<=k;i++)
       {
          cin>>s[i];
          int a=n.find(s[i]);
          if(a==-1)
          	flag=1;
       }
       if(flag)
       	cout<<-1<<endl;
       else
       {
       	vector<pair<int,int>>final;
       	for (int i = n.size()-1; i >0; i--){
       		for (int len = n.size() - i; len >=1; len--)
       			{
       				for(x=1;x<=k;x++){
       				   if(s[x]==n.substr(i, len))
       					  final.push_back({x,i+1});
       				}
       			}
        	}
        	cout<<final.size()<<endl;
        	for(auto x:final)
        		cout<<x.first<<' '<<x.second<<endl;
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
	int n,i,j,cnt=0,flag=0,k,t,x=1,h,m;
	cin>>t;
	while(t--)
	{
		int H,M;
       cin>>n>>H>>M;
       vector<pair<int,int>>v;
       if(H>12){
       for(i=1;i<=n;i++)
       {
            cin>>h>>m;
      	 	int f=((h+(24-H))*60)-abs(m-M);
      	 	v.push_back({f/60,f%60});
       }
      }
      else
      {
      	 for(i=1;i<=n;i++)
      	 {
      	 	cin>>h>>m;
      	 	int f=(abs(h-H)*60)-abs(m-M);
      	 	v.push_back({f/60,f%60});

      	 }
      }
      sort(v.begin(), v.end());
      for(auto x:v){
      	cout<<x.first<<' '<<x.second<<endl;
         break;
      }
	}
	return 0;
}