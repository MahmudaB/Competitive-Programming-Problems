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
	int n,i,j,cnt=0,flag=0,k,t;
	cin>>n;
	for(i=1;i<n;i++)
	   cout<<"(";
	for(j=1;j<=n;j++){
		string s="";
	    for(i=1;i<=j;i++)
    	{
		  cout<<"sin("<<i;
		  s+=')';
		  if(i<j)
		  {
			cout<<(i%2!=0?'-':'+');
		  }
		  else cout<<s;
    	}
    	cout<<'+'<<n-j+1;
    	if(j<n)cout<<')';
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
#define pi 2 * acos (0.0) 
int main()
{
    //fast;
	int i,j,cnt=0,flag=0,k,t,x=1;
	cin>>t;
	while(t--)
	{
		double n,res;
       cin>>n;
      res=(4*n*n)-(n*n*pi);
      case(x);
      printf("%.9lf\n",res);
      x++;
	}
	return 0;
}