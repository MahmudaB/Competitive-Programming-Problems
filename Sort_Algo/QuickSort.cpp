//In the name of Almighty Allah
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
const int Mx=123;
ll a[Mx];

ll CorrectPlace(ll low,ll high)
{
   ll i=low,j=high;
   while(i<j){
      while(i<high && a[i]<=a[low])i++;
      while(j>low && a[j]>a[low])j--;
      if(i<j){
        swap(a[i],a[j]);
      }
   }
   swap(a[low],a[j]);
   return j;
}
void QuickSort(ll low,ll high)
{
  if(low>=high)return ;
  ll partitionIndx=CorrectPlace(low,high);
  QuickSort(low,partitionIndx-1);
  QuickSort(partitionIndx+1,high);
}
int main()

{
    ll n,i;
    cin>>n;
    for(i=0;i<n;i++)
     cin>>a[i];
    QuickSort(0,n-1);
    
    for(i=0;i<n;i++)
     cout<<a[i]<<' ';
    return 0;
}