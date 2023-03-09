//In the name of Almighty Allah
/*
 Question:A
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
	int n,i,j,cnt=0,flag=0,k,t,x=1;
	cin>>t;
	while(t--)
	{
       char s[10][10];
       cnt=0;
       for(i=1;i<=2;i++)
       {
       	for(j=1;j<=2;j++)
       		cin>>s[i][j];
       }
      if(s[1][1]==s[1][2])
      	cnt++;
      if(s[1][1]==s[2][1])
      	cnt++;
      if(s[1][1]==s[2][2])
      	cnt++;
      if(s[1][2]==s[2][1])
      	cnt++;
      if(s[1][2]==s[2][2])
      	cnt++;
      if(s[2][1]==s[2][2])
      	cnt++;
      if(cnt==2 || cnt==3)
      	cout<<1<<endl;
      else if(cnt==6)
      	cout<<0<<endl;
      else if(cnt==1)
      	cout<<2<<endl;
      else cout<<3<<endl;
	}
	return 0;
}

// Question:B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,b,n,s,t,i,x,m,y,d;
     cin>>t;
    while(t--)
    {
     cin>>n>>m>>x>>y>>d;
     int f1=0,f2=0,cnt=0,c1=0;
     for(i=2;i<=n;i++)
     {
       s=abs(i-x)+abs(1-y);
       if(s<=d)
        {
        f1=1;
        break;
        }
        else cnt++;
    
     }
    if(f1==0)
    {
        for(i=2;i<=m;i++)
     {
       s=abs(n-x)+abs(i-y);
       if(s<=d)
        {
        f1=1;
        break;
        }
        else cnt++;
    
       }
     }
     for(i=2;i<=m;i++)
     {
       s=abs(1-x)+abs(i-y);
       if(s<=d)
        {
        f2=1;
        break;
        }
        else c1++;
    
     }
    if(f2==0)
    {
        for(i=2;i<=n;i++)
     {
       s=abs(i-x)+abs(m-y);
       if(s<=d)
        {
        f2=1;
        break;
        }
        else c1++;
       }
    
     }
    if(f1==1 && f2==1)
     cout<<-1<<endl;
    else if(f1==0)
     cout<<cnt<<endl;
    else cout<<c1<<endl;
    
    }
    
  return 0;
}
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
    int n,i,j,cnt=0,flag=0,k,t,x=1;
    cin>>t;
    while(t--)
    {
        set<char>s;
       for(i=1;i<=4;i++)
       {
         char c;
         cin>>c;
         s.insert(c);
       }
       cout<<s.size()-1<<endl;
    }
    return 0;
}
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
    int n,cnt=0,k,t,x,y,m,d;
    cin>>t;
    while(t--)
    {
       cin>>n>>m>>x>>y>>d;
       if((x-1>d && m-y>d)||(n-x>d && y-1>d))
        cout<<n+m-2<<endl;
       else cout<<-1<<endl;;
    }
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