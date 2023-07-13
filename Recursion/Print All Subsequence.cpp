//In the name of Almighty Allah
#include<bits/stdc++.h>
using namespace std;

void Subseq(int i,vector<int> &v, int a[],int n)
{
  if(i>=n)
  {
    if(v.size()==0)cout<<"{}";
    for(auto x:v)
     cout<<x<<' ';
    cout<<endl;
    return;
  }
  v.push_back(a[i]); //take the element
  Subseq(i+1,v,a,n);
  
  v.pop_back();    //delete the element
  Subseq(i+1,v,a,n);
}
int main()
{

       int a[]={3,1,2,4},n=4;
       vector<int>v;
       Subseq(0,v,a,n);
    return 0;
}