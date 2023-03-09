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
	for(i=1;i<=t;i++)
	{
		int a[5];
		for(j=1;j<=3;j++)
			cin>>a[j];
		sort(a+1,a+4);
         cin>>k;
        case(i);
       if(a[1]==a[2] && a[2]==a[3])
       	cout<<"Peaceful\n";
       else{
       	 if(a[1]==a[2])
       	 	a[1]+=k,a[2]+=k,a[3]-=(2*k);
       	 else if(a[2]==a[3])
       	 	a[1]+=(2*k),a[2]-=k,a[3]-=k;
       	 else a[1]+=k,a[3]-=k;

         if(a[1]==a[2] && a[2]==a[3])
       	   cout<<"Peaceful\n";
          else cout<<"Fight\n";
        }
	}
	return 0;
}