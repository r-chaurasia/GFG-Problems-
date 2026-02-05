class Solution {
  public:
    int dp[1001][1001];
    int cost(int W, vector<int>& val, vector<int>& wt, int i) {
        if(i >= val.size())
            return 0;
            
        if(W <= 0)
            return 0;
         
        if(dp[i][W] != -1)
            return dp[i][W];
            
        int t=0 , nt=0;  

        if(wt[i] <= W) 
            t = val[i] + cost(W-wt[i] , val , wt , i+1);
      
        nt = cost(W , val , wt , i+1);

        return dp[i][W] = max(t, nt);
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        memset(dp, -1, sizeof(dp));
        return cost(W , val , wt , 0);
        
    }
};