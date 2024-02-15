
class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
        //code here
        vector<int>adj[K];
        vector<int>indegree(26,0);
        for(int i=1;i<N;i++)
        {
            string a=dict[i-1];
            string b=dict[i];
            //cout<<a<<' '<<b<<endl;
            for(int j=0;j<min(a.size(),b.size());j++)
            {
                if(a[j]!=b[j]){
                  adj[a[j]-'a'].push_back(b[j]-'a');
                  indegree[b[j]-'a']++;
                  break;
                }
            }
        }
        string ans;
        queue<int>q;
        for(int i=0;i<K;i++)
        {
            if(indegree[i]==0)
             q.push(i);
        }
        while(!q.empty())
        {
            int c=q.front();
            char v='a'+c;
            ans.push_back(v);
            q.pop();
            
            for(auto it:adj[c])
            {
                indegree[it]--;
                if(indegree[it]==0)
                 q.push(it);
            }
        }
        
         return ans;
    }
};