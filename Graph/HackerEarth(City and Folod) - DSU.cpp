//In the name of Almighty Allah
//Disjoint Set Union -->  TC(alpha(n)) constant
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+123;

int parent[N];
void make(int v)
{
  parent[v]=v;
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
      parent[b]=a;
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