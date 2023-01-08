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
  int ans=1,cnt=1;
  string s;
  cin>>s;
  for(int i=0;i<s.size()-1;i++)
  {
   if(s[i]==s[i+1]){
    cnt++;
    ans=max(ans,cnt);
  }
  else cnt=1;
}
cout<<ans<<endl;
return 0;
}