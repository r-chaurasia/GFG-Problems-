class Solution {
  public:
    int isPowerOfFour(unsigned int n) {
        // Your code goes here
        if (n == 1)
            return 1;
        if (n == 0)
            return 0;
        if (n % 4 != 0)
            return 0;
            
        return isPowerOfFour(n/4);
    }
};