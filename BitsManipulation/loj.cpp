//In the name of Almighty Allah
/*
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
       cin>>n;
       if(n<=10)
       	cout<<0<<' '<<n<<endl;
       else cout<<10<<' '<<(n-10)<<endl;
	}
	return 0;
}
//In the name of Almighty Allah
//Hex-a-bonacci
//In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
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
    ll n,i,j,cnt=0,flag=0,k,t,x=1;
    cin>>t;
    while(t--)
    {
       ll fi[100010];
       cin>>fi[0]>>fi[1]>>fi[2]>>fi[3]>>fi[4]>>fi[5]>>n;
       for(i=6;i<=n;i++)
         fi[i]=(fi[i-1]+fi[i-2]+fi[i-3]+fi[i-4]+fi[i-5]+fi[i-6])%10000007;
       case(x);
       cout<<fi[n]%10000007<<endl;
       x++;
    }
    return 0;
}

//In the name of Almighty Allah
//LOJ 1216 - Juice in the Glass

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
#define pi 2 * acos (0.0) 
int main()
{
    //fast;
    int n,i,j,cnt=0,flag=0,k,t,x=1;
    cin>>t;
    while(t--)
    {
      double r1,r2,h,p,r3;
      cin>>r1>>r2>>h>>p;
      r3=r2+((r1-r2)*p)/h;
      double res=pi/3*p*(r3*r3+r2*r2+r2*r3);
      case(x);
      x++;
      printf("%.12lf\n",res );
    }
    return 0;
}
//In the name of Almighty Allah
//Fibsieve's Fantabulous Birthday

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
    ll n,i,j,cnt=0,k,t,x=1;
    cin>>t;
    while(t--)
    {
       cin>>n;
       ll root=ceil(sqrt(n*1.0)),row,col,lac;
       case(x);
       lac=(root*root)-n;
       if(lac<root)
       {
         row=root;
         col=lac+1;
       }
       else
       {
         col=root;
         row=n-((root-1)*(root-1));
       }
       if(root%2==0)
        swap(row,col);
      cout<<col<<' '<<row<<endl;
      x++;
    }
    return 0;
}
//In the name of Almighty Allah
//LOJ-1010 - Knights in Chessboard

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
    int n,i,j,cnt=0,flag=0,k,t,x=1,m;
    cin>>t;
    while(t--)
    {
       cin>>m>>n;
       k=m*n;
       case(x);
       if(m==1 || n==1)
        cout<<max(m,n)<<nl;
      else if(m==2 || n==2)
        cout<<(((k/8)*4)+(k%8>=4?4:k%8))<<nl;
      else cout<<(m*n+1)/2<<nl;
       x++;
    }
    return 0;
}*/
//In the name of Almighty Allah
//LOJ 1015 - Brush (I)

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
       cin>>n;
       int sum=0;
       while(n--)
       {
         cin>>k;
         if(k>0)
            sum+=k;
       }
       case(x);
       cout<<sum<<nl;
       x++;
    }
    return 0;
}