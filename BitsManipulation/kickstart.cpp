//In the name of Almighty Allah
/*
#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define case(z) cout<<"Case #"<<z<<": "
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
       int a[n+10],sum=0;
       for(i=0;i<n;i++)
       	cin>>a[i],sum+=a[i];
       case(x);
       cout<<sum%m<<endl;
       x++;
	}
	return 0;
}
//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define case(z) cout<<"Case #"<<z<<": "
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
    ll n,i,j,cnt=0,flag=0,k,t,x=1,m;
	cin>>t;
	while(t--)
	{
       cin>>n;
       ll a[n+10],max,cnt=0;
       for(i=1;i<=n;i++){
       	cin>>a[i];
       }
       max=a[1];
       if(a[1]>a[2])
       	cnt++;
       for(i=2;i<n;i++)
       {
           if(a[i]>max && a[i]>a[i+1])
       	      max=a[i],cnt++;
       }
       if(a[n]>max)
       	cnt++;
       case(x);
       cout<<cnt<<endl;
       x++;
	}
	return 0;
}
/*
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
       if(k%2!=0)
       {
        YES
        for(i=1;i<n;i+=2)
            cout<<i<<' '<<i+1<<endl;
       }
       else
       {
         if(k%4==0)
            NO
        else
        {
            YES
            for(i=1;i<n;i+=2)
            {
                if((i+1)%4==0)
                    cout<<i<<' '<<i+1<<endl;
                else
                    cout<<i+1<<' '<<i<<endl;
            }
        }
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
    int n,i,j,cnt=0,flag=0,k,t,x=1;
    cin>>t;
    while(t--)
    {
       cin>>n;
       cout<<n<<endl;
       int a[n+10];
        for(i=1;i<=n;i++)
        {
            a[i]=i;
            cout<<i<<' ';
        }
        cout<<endl;
        for(i=2;i<=n;i++)
        {
            swap(a[i],a[i-1]);
            for(j=1;j<=n;j++)
                cout<<a[j]<<' ';
            cout<<endl;
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
    int n,i,j,flag=0,k,t,x,y;
    cin>>t;
    while(t--)
    {
       cin>>n;
      int cnt=0,xn=0,xm=0,yn=0,ym=0;
       for(i=1;i<=n;i++){
           cin>>x>>y;
           xn=min(x,xn);
           xm=max(x,xm);
           yn=min(y,yn);
           ym=max(y,ym);
       }
       cout<<2*(ym+xm-xn-yn)<<endl;

    }
    return 0;
}