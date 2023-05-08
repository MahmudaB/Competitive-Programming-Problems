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
double x,y;
double cal(double d)
{
  double h1=sqrt(x*x-d*d),h2=sqrt(y*y-d*d);
  return (h1*h2)/(h1+h2);
}
int main()

{
      // fast;
       int t,i=1,j,g,type,n,k,diff,m;
       cin>>t;
       while(t--)
       { 
         double h;
         cin>>x>>y>>h;
         double l=0,r=min(x,y),eps=1e-9;
         for(j=0;j<100;j++)
         {
           double  mid=(l+r)/2;
           if(cal(mid)>h)
            l=mid;
           else r=mid;
         }
         case(i);
         i++;
         printf("%.9lf\n",l);
       }
        
    return 0;
}