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
const int mx=323;
int pre[11][mx][mx],n;
void Pre_Sum(int num)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
       pre[num][i][j]+=pre[num][i-1][j]+pre[num][i][j-1]-pre[num][i-1][j-1];
    }
 }
}
int main()
{
       fast;
       ll q,i,j,a,b,c,d,x;
       cin>>n;
       for(i=1;i<=n;i++)
       {
         for(j=1;j<=n;j++)
         {
           cin>>x;
           pre[x][i][j]=1;
         }
       }
       for(i=1;i<=10;i++)
       {
         Pre_Sum(i);
       }
       cin>>q;
       while(q--)
       {
         cin>>a>>b>>c>>d;
         int ans=0;
         for(i=1;i<=10;i++)
         {
           if(pre[i][c][d]+pre[i][a-1][b-1]-pre[i][a-1][d]-pre[i][c][b-1])
            ans++;
         }
         cout<<ans<<nl;
       }
    return 0;
}