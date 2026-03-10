class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        vector<int>ans;
        int n = adj.size();
        int m = adj[0].size();
        
        queue<int>q;
        q.push(0);
        vector<int>vis(n+1, 0);
        
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            vis[node] = 1;
            
            ans.push_back(node);
            
            vector<int>v = adj[node];
            for(auto a: v){
                if(vis[a] == 0) {
                    q.push(a);
                    vis[a] = 1;
                }
            }
        }
        
        return ans;
    }
};