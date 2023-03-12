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
       int i,n,target,l,r,ans;
         cin>>n;
       for(i=1;i<=n;i++)
         cin>>a[i];
       cin>>target;
       
       sort(a+1,a+n+1); //definitly Sorted Array
       l=1,r=n,ans=-1;
       while(l<=r)
       {
         int mid=(l+r)/2;
         if(a[mid]==target){
          ans=mid;
          break;
         }
         if(a[mid]<target)
          l=mid+1;
        else r=mid-1;
       }
       if(ans==-1)
       {
         cout<<"Target is not found\n";
       }
       else
       {
         cout<<"Target Is Found and the Index is : "<<ans<<nl;
       }
        
    return 0;
}