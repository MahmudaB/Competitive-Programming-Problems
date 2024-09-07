//In the name of Almighty Allah
//Smallest Subsequence of Unique Number in array;
// Maximum length Subsequence With Only Unique Element
// TC-> O(n(log2(n))

#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define nl '\n'
#define pb push_back
#define f first
#define s second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const int Mx=3e5+123;
int a[Mx],vis[Mx];
vector<int> adj[Mx];
int main()

{

      int n,i;
      cin>>n;
      for(i=1;i<=n;i++)
       cin>>a[i];
      
      map<int,bool>lastOcc;
      set<int>present;
      for(i=n;i>=1;i--){
         if(!present.count(a[i]))
           lastOcc[i]=true; //red
         present.insert(a[i]);
      }
      
      set<int>available,taken;
      vector<int>res;
      vector<vector<int>> indices(n+10);
      int cur=0;
      
      for(i=1;i<=n;i++){
         if(taken.count(a[i]))
          continue;
          
         available.insert(a[i]);
         indices[a[i]].pb(i);
         
         if(!lastOcc[i])
          continue; //until hit the boundary
          
         while(!taken.count(a[i])){
           
            int ele=*(available.begin());
            while(indices[ele].back()<cur){
               available.erase(ele);
               ele=*(available.begin());
            }
            
            cur=*upper_bound(all(indices[ele]),cur);
            available.erase(ele);
            taken.insert(ele);
            res.pb(ele);
         }
      }
      
      cout<<res.size()<<"\n";
      for(auto x:res)
       cout<<x<<' ';
      cout<<nl;
    
    return 0;
}
