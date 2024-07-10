//In the name of Almighty Allah
#include<bits/stdc++.h>
using namespace std;

const int N=2e5+123;

int parent[N];
int Size[N];

void make(int v)
{
  parent[v]=v;
  Size[v]=1;
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
      if(Size[a]<Size[b])
        swap(a,b);
      parent[b]=a;
      Size[a]+=Size[b];
   }
}
int main()

{
     int t;
     cin>>t;
     while(t--){
       
        int n,i,k;
        cin>>n>>k;
        for(i=1;i<=n;i++)
          make(i);
    
        string s,T, ans="YES";
        cin>>s>>T;
        s='#'+s;
        T='#'+T;
        
        for(i=1;i<=n;i++){
           if(i+k<=n)
            Union(i,i+k);
           if(i+k+1<=n)
            Union(i,i+k+1);
        }
        
        map<int,string>mp[2];
        set<int>Root;
        
        for(i=1;i<=n;i++)
        {
           int r=find(i);
           Root.insert(r);
           
           mp[0][r].push_back(s[i]);
           mp[1][r].push_back(T[i]);
        }
        
        for(auto r:Root){
           sort(mp[0][r].begin(),mp[0][r].end());
           sort(mp[1][r].begin(),mp[1][r].end());
           
           if(mp[0][r]!=mp[1][r]){
             ans="NO";
             break;
           }
        }
        cout<<ans<<'\n';
    
     }
    return 0;
}