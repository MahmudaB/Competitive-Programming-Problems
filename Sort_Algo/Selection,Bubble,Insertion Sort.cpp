//In the name of Almighty Allah
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
 
#define nl '\n'
#define pb push_back
#define f first
#define s second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define mod 1000000007


#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
const int Mx=123;
int a[Mx],vis[Mx];

void selection_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++){
       int mini=i;
       for(int j=i;j<n;j++){
          if(a[j]<a[mini])
           mini=j;
       }
       
       swap(a[mini],a[i]);
   }
}

void Bubble_Sort(int a[],int n)
{
    for(int i=0;i<n-1;i++){
      
      bool Swapped=0;
      for(int j=0;j<n-i-1;j++){
         if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            Swapped=1;
         }
      }
      
      if(!Swapped)break;
    }
}

void Insertion_Sort(int a[],int n)
{
    for(int i=1;i<n;i++){
      
      int key=a[i];
      int j=i-1;
      while(j>=0 && a[j]>key)
       a[j+1]=a[j],j--;
      
      a[j+1]=key;
      
      for(int in=0;in<n;in++)
       cout<<a[in]<<' ';
      cout<<nl;
    }
}
int main()

{
     fast;
     //Sieve();
     int t,i,j,x,g,type,n,k,diff,m;
     cin>>n;
     for(i=0;i<n;i++)
      cin>>a[i];
     
    // selection_sort(a,n);
    //Bubble_Sort(a,n);
    Insertion_Sort(a,n);
     for(i=0;i<n;i++)
      cout<<a[i]<<' ';
      
    return 0;
}