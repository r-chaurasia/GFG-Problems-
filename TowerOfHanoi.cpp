class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        if (n == 1)
            return 1;
            
        int  a = towerOfHanoi(n-1 , from , aux , to);
        
        return 2*a + 1;
    }
};