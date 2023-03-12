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
ll gcd(ll a,ll b){
	 return __gcd(a,b);
}

ll lcm(ll a,ll b){
	 return (a*(b/gcd(a,b)));
}
const int mx=123;
int a[mx];
int main()
{
       fast;
       int t,i,j,x,g,type,n,k,diff,m;
       cin>>n>>x;
       for(i=0;i<n;i++)
         cin>>a[i];
       sort(a,a+n);
       
       int l=0,r=n-1,UpperBound=n;//if(7 is not exist and it is the gretest number in array then n would be its UpperBound)
       while(l<=r)
       {
         int mid=(l+r)/2;
         if(a[mid]>x)
         {
            UpperBound=min(mid,UpperBound);
            r=mid-1;
         }
         else l=mid+1;
       }
      
      cout<<UpperBound<<nl;
    return 0;
}