class Solution {
public:
    int dp[3001];
    bool wb(string&s, map<string, int>&m , int i) {
        if(i >= s.size())
            return true;
        if(m.find(s) != m.end())
            return true;
            
        if(dp[i] != -1)
            return dp[i];
            
        for(int l=1 ; l<s.size() ; l++) {
            string t = s.substr(i,l);
            if(m.find(t) != m.end() && wb(s, m, i+l))
                return dp[i] = true;
        }
        return dp[i] = false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        map<string, int> m;
        memset(dp,-1,sizeof(dp));
        for(auto a:wordDict)
            m[a]++;
            
        return wb(s, m, 0);
    }
};