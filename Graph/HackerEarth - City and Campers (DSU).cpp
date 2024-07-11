//In the name of Almighty Allah
#include<bits/stdc++.h>
using namespace std;
 
 
#define nl '\n'
const int N=1e5+123;
int parent[N],Size[N];
multiset<int>st;
 
void make(int v){
  parent[v]=v;
  Size[v]=1;
  st.insert(1);
}
int find(int v)
{
  if(parent[v]==v)return v;
  //path compression
  return parent[v]=find(parent[v]);
}
void merge(int a,int b)
{
  st.erase(st.find(Size[a]));
  st.erase(st.find(Size[b]));
  
  st.insert(Size[a]+Size[b]);
}
void Union(int a,int b)
{
   a=find(a),b=find(b);
   if(a!=b){
      if(Size[a]<Size[b])
        swap(a,b);
        //Union by Size
      merge(a,b);
      parent[b]=a;
      Size[a]+=Size[b];
   }
}
int main()
 
{
     int n,q,i;
     cin>>n>>q;
     for(i=1;i<=n;i++)
      make(i);
     
      while(q--){
          int u,v;
          cin>>u>>v;
          Union(u,v);
        int mx=*(st.begin());
        int mn=*(--st.end());
        
        cout<<mn-mx<<nl;
      }
    return 0;
}