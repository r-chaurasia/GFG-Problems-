class Solution {
  public:
    void grid(vector<string>& ans , int i , int j , int r , int c , 
        vector<vector<int>>& maze , string str) {
            if (i<0 || i>=r || j<0 || j>=c || maze[i][j] == 0) 
                return;
            
            if (i == r-1 && j == c-1) {
                ans.push_back(str);
                return;
            }
            
            maze[i][j] = 0;
            
            grid(ans , i+1 , j , r , c , maze , str+"D");
            grid(ans , i , j-1 , r , c , maze , str+"L");
            grid(ans , i , j+1 , r , c , maze , str+"R");
            grid(ans , i-1 , j , r , c , maze , str+"U");
            
            maze[i][j] = 1;
        }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string> ans;
        // d -> 
        int rows = maze.size();
        int col = maze[0].size();
        
        string str;
        
        grid(ans , 0 , 0 , rows , col , maze , str);
        
        return ans;
    }
};