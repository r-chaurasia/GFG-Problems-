class Solution {
  public:
    int ans(vector<int>& arr , int n , int sum) {
        if (n < 0)
            return sum;
            
        sum += arr[n];
        
        return ans(arr , n-1 , sum);
        
    }
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        // code here
        int n = arr.size();
        int sum = 0;
        
        return ans (arr , n-1 , sum);
    }
};