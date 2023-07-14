//In the name of Almighty Allah
#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back
#define endl '\n'
int f(int i,int sum,int n,int a[],int s)
{
  if(sum>s)return 0;  //strictly done when array has only +e value
  if(i==n){
    // condition satisfied
    if(sum==s) return 1;
    
    // not satisfied
    return 0;
  }
  
  // pick the element
  sum+=a[i];
  int l=f(i+1,sum,n,a,s);
  
  // not pick the element
  sum-=a[i];
  int r= f(i+1,sum,n,a,s);
  return r+l;
}
int main()

{
       int a[]={1,2,1},n=3,sum=2;
       cout<<"Total Subsequnce that has sum : "<<f(0,0,n,a,sum)<<endl;
    return 0;
}