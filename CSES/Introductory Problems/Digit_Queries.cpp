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
int main()

{
       fast;
       ll q,i,k;
       cin>>q;
       while(q--)
       { 
         cin>>k;
         if(k<10)
         {
           cout<<k<<nl;
           continue;
         }
         ll cnt=1,val=9;
         while(k-(cnt*val)>=0)
         {
           k-=(cnt*val);
           cnt++;
           val*=10;
         }
         val/=9;
         val+=(k/cnt);
         if(k%cnt==0)
         {
           val--;
           cout<<val%10<<nl;
         }
         else
         {
           string s=to_string(val);
           int ind=k%cnt;
           cout<<s[ind-1]<<nl;
         }
       }
        
    return 0;
}