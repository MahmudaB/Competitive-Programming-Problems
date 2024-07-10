//In the name of Almighty Allah
//Disjoint Set Union -->  TC(alpha(n)) constant
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+123;

int parent[N];
int size[N];

void make(int v)
{
  parent[v]=v;
  size[v]=1;
}
int find(int v)
{
  if(v==parent[v])return v;
  //path compression
  return parent[v]=find(parent[v]);
}

void Union(int a,int b)
{
   a=find(a);
   b=find(b);
   if(a!=b){
     // Union by size
      if(size[a]<size[b])
        swap(a,b);
      parent[b]=a;
      size[a]+=size[b];
   }
}
int main()

{
     int n,edge,i;
     
     cin>>n>>edge;
     for(i=1;i<=n;i++)
      make(i);
      
     for(i=1;i<=edge;i++){
       int u,v;
        cin>>u>>v;
        Union(u,v);
     }
    
     int connected_component=0;
     for(i=1;i<=n;i++){
        if(find(i)==i)
         connected_component++;
     }
     cout<<connected_component<<endl;
    return 0;
}