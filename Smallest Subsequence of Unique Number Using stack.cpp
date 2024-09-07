//In the name of Almighty Allah
//Smallest Subsequence of Unique Number in array;
// Maximum length Subsequence With Only Unique Element
// TC-> O(n) using stack

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
      
      vector<int>lastOcc(n+10),res;
      vector<bool>taken(n+10);
      stack<int>st;
      
      for(i=1;i<=n;i++)
       lastOcc[a[i]]=i; //take the last indx of each Element
       
      for(i=1;i<=n;i++){
         
         if(!taken[a[i]]){
            while(!st.empty() and lastOcc[st.top()]>i and st.top()>a[i]){
              taken[st.top()]=false;
              st.pop();
            }
            
            st.push(a[i]);
            taken[a[i]]=true;
         }
         
      }
      while(!st.empty()){
        res.pb(st.top());
        st.pop();
      }
      reverse(all(res));
      
      cout<<res.size()<<"\n";
      for(auto x:res)
       cout<<x<<' ';
      cout<<nl;
    
    return 0;
}