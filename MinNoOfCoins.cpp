class Solution {
  public:
    int count(int n, int ans) {
        if(n <= 0)
            return ans;
        
        if(n >= 10) {
            ans += n/10;
            return count(n%10 , ans);
        }
        else if(n >= 5) {
            ans += n/5;
            return count(n%5 , ans);
        }
        else if(n >= 2) {
            ans += n/2;
            return count(n%2 , ans);
        }
        
        return ans+1;
            
    }
    int findMin(int n) {
        // code here
        int ans = 0;
        
        return count(n, ans);
    }
};