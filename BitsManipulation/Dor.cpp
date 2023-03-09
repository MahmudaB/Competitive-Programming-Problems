//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define case(z) cout<<"Case "<<z<<": "
#define ll long long
#define nl "\n"
int main()
{
    fast;
	ll n,i,j,cnt=0,flag=0,k,t,x=1,pos;
	cin>>t;
	while(t--)
	{
      cin>>n>>k;
      pos=0;
      for(i=62;i>=0;i--)
      {
      	x=(1LL<<i);
      	if(((k&x)!=0) && (n&x)==0)
      	{
      		pos=i;
      		break;
      	}
      }
      cout<<(k|(1LL<<pos))<<endl;
       
	}
	return 0;
}