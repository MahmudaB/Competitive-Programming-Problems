//In the name of Almighty Allah
/**Permutations

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
    int n,i,j,cnt=0,flag=0,k,t;
    cin>>n;
    vector<int>odd,even;
    for(i=1;i<=n;i++)
    {
        if(i&1)odd.push_back(i);
        else even.push_back(i);
    }
    if(n==2 || n==3 )
        cout<<"NO SOLUTION\n";
    else
    { 
      for(auto i:even)
        cout<<i<<' ';
      for(auto i:odd)
        cout<<i<<' ';
    cout<<endl;
    }
    return 0;
}
//In the name of Almighty Allah
/**Weird Algorithm

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
    ll n,i,j,cnt=0,flag=0,k,t;
    cin>>n;
    cout<<n;
     while(n>1)
    {
       if(n&1)n=n*3+1;
       else n/=2;
       cout<<' '<<n;
    }
    cout<<endl;
  return 0;
}

//In the name of Almighty Allah
/**MISSING NUMBERS

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
    ll n,i,j,sum=0;
    cin>>n;
    for(i=1;i<n;i++)
    {
      cin>>j;
      sum+=j;
    }
    cout<<((n*(n+1))/2)-sum<<endl;
  return 0;
}*/
//In the name of Almighty Allah
/**Repetitions

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

//In the name of Almighty Allah
/**Increasing Array
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
    int n,x,mx=0,i;
    ll ans=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>x;
       mx=max(x,mx);
       ans+=(mx-x);
    }
    cout<<ans;
  return 0;
}*/

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
  ll n,i,j,cnt=0,flag=0,k,t,x,c,y;
  cin>>t;
  while(t--)
  {
       cin>>y>>x;
       c=max(y,x);
       if(c%2)
       {
         ll first=c*c;
          if(c==x)
            cout<<first-y+1<<endl;
          else
          {
             ll last=first-c+1;
             cout<<last-c+x<<endl;
          }
       }
       else
       {

         ll first=((c-1)*(c-1))+1;
          if(c==x)
            cout<<first+y-1<<endl;
          else
          {
             ll last=first+c-1;
             cout<<last+c-x<<endl;
          }
       }
  }
  return 0;
}