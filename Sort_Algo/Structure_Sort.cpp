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
struct info{
  int age;
  double score;
  string name;
};
bool cmp(info a,info b)
{
  if(a.score>b.score)return true;
  else if(a.score==b.score and a.age<b.age)return true;
  else if(a.score==b.score and a.age==b.age and a.name<b.name)return true;
  return false;
}
int main()

{
       fast;
       int t,i,j,x,g,type,n,k,diff,m;
       cin>>n;
       vector<info>v;
       info a;
       for(i=1;i<=n;i++)
       {
         cin>>a.score>>a.age>>a.name;
         v.push_back(a);
       }
       sort(v.begin(),v.end(),cmp);
       for(auto x:v)
        cout<<x.score<<' '<<x.age<<' '<<x.name<<nl;
        
    return 0;
}
/*
Input:
5
3.45 23 Gazi
3.11 21 Moni
3.02 20 Joni
3.11 20 Nova
3.02 20 Alvi*/