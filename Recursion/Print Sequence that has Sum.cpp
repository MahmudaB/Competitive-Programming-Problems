//In the name of Almighty Allah
#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back
#define endl '\n'
void f(int i,vi &v,int sum,int n,int a[],int s)
{
  if(sum>n)return;
  if(i==n)
  {
    if(sum==s)
    {
      for(auto x:v)
       cout<<x<<" ";
      cout<<endl;
    }
    return;
  }
  
  v.pb(a[i]);
  sum+=a[i];
  f(i+1,v,sum,n,a,s);
  
  v.pop_back();
  sum-=a[i];
  f(i+1,v,sum,n,a,s);
}
int main()

{
       int a[]={1,2,1,2},n=3,s=2;
       vi v;
       f(0,v,0,n,a,s);
    return 0;
}