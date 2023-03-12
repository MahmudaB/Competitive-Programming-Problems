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
const int mx=1e5+123;
int a[mx],b[mx];
int main()

{
       fast;
       int i,n,target,l,r,cnt=0,q,pre=-1;
         cin>>n;
       for(i=0;i<n;i++)
         cin>>a[i];
        cin>>q;
      for(i=0;i<q;i++)
         cin>>b[i];
      sort(b,b+q);
       for(i=0;i<n;i++){
         
         target=a[i], l=0,r=q-1;
         if(pre==target)continue;
         pre=target;
         
          while(l<=r)
          {
            int mid=(l+r)/2;
            if(b[mid]==target){
             cnt++;
             break;
            }
            if(b[mid]<target)
            l=mid+1;
           else r=mid-1;
         }
         
       }
       cout<<cnt<<nl;
        
    return 0;
}