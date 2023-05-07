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
      // fast;
       int t,x=1;
       cin>>t;
       while(t--)
       { 
         double ab,ac,bc,ra,de,ad,ae,ra1,z;
         double aABC,aADE,aBDEC,sABC,sADE;
         cin>>ab>>ac>>bc>>ra;
         
         sABC=(ab+bc+ac)/2;
         aABC=sqrt(sABC*(sABC-ab)*(sABC-bc)*(sABC-ac));
         double l=0,r=ab,eps=1e-8;
         while(r-l>eps)
         {
           double mid=(l+r)/2;
           ad=mid;
           
           z=ad/ab;
           ae=ac*z;
           de=bc*z;
           
           sADE=(ad+ae+de)/2;
           aADE=sqrt(sADE*(sADE-ad)*(sADE-ae)*(sADE-de));
           
           aBDEC=aABC-aADE;
           ra1=(aADE/aBDEC);
       
           if(ra1>ra)r=mid;
           else l=mid;
         }
         
         case(x);
         x++;
         printf("%.9lf\n",l);
       }
        
    return 0;
}