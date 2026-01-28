#include<bits/stdc++.h>
using namespace std;

int ans (int n , int sum) {
    if (n == 0)
        return sum;
        
    int r = n % 10;
    sum = sum + r;
    
    return ans (n/10 , sum);
}


int main () {
    int n;
    cin>>n;
    
    int sum = 0;
    
    cout<<ans(n , 0);
    return 0;
}