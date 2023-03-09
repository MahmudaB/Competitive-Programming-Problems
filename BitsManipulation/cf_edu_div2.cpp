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
       int a[n+10],mx=INT_MIN;
       for(i=1;i<=n;i++)
       {
       	 cin>>a[i];
       	 if(a[i]>mx)
       	 {
       	 	mx=a[i];
       	 	cnt=i;
       	 }
       }
       cout<<cnt<<nl;
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
       if(n==4)
       	cout<<"2 1 3 4\n";
       else{
       for(i=3;i<n-2;i++)
       	cout<<i<<' ';
       cout<<2<<' '<<n-2<<' '<<1<<' '<<n-1<<' '<<n<<nl;
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
	int n,i,j,cnt=0,flag=0,t,x=1;
	cin>>t;
	while(t--)
	{
       cin>>n;
       cnt=0;
       priority_queue<int>a,b;
       for(i=1;i<=n;i++)
       	cin>>x,a.push(x);
       for(i=1;i<=n;i++)
       	cin>>x,b.push(x);
       while(!a.empty())
       {
       	 if(a.top()==b.top())
       	 	a.pop(),b.pop();
       	 else
         {
         	cnt++;
         	if(a.top()>b.top())
         	{
         		double k=log10(a.top());
         		a.pop(),a.push(floor(k)+1);
         	}
         	else
         	{
         		double k=log10(b.top());
         		b.pop(),b.push(floor(k)+1);
         	}
         }
       }
       cout<<cnt<<nl;

	}
	return 0;
}