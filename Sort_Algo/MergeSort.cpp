//In the name of Almighty Allah
#include<bits/stdc++.h>
using namespace std;
 
#define nl '\n';

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int Mx=123;
int a[Mx];

void Merge(int low,int mid,int high)
{
    int left=low,right=mid+1;
    int tmp[1000],i=0;
    while(left<=mid && right<=high){
        if(a[left]<=a[right]){
           tmp[i++]=a[left++];
        }
        else{
          tmp[i++]=a[right++];
        }
    }
    
    while(left<=mid){
      tmp[i++]=a[left++];
    }
    while(right<=high){
      tmp[i++]=a[right++];
    }
    
    for(i=low;i<=high;i++)
     a[i]=tmp[i-low];
    
}
void MergeSort(int low,int high)
{
  if(low==high)return;
  int mid=(low+high)/2;
  MergeSort(low,mid);
  MergeSort(mid+1,high);
  Merge(low,mid,high);
}
int main()

{
     fast;
     int n,i;
     cin>>n;
     for(i=0;i<n;i++)cin>>a[i];
     MergeSort(0,n-1);
     
     for(i=0;i<n;i++)
      cout<<a[i]<<' ';
     cout<<nl;
    return 0;
}