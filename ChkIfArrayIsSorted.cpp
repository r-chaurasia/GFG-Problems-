#include<bits/stdc++.h>
using namespace std;

bool ans (int arr[] , int n) {
    if (n <= 0)
        return true;
        
    if (arr[n-1] <= arr[n])
        return ans (arr , n-1);
    
    return false;
}


int main () {
    int n;
    cin>>n;
    
    int arr[n];
    
    for (int i=0 ; i<n ; i++) 
        cin>>arr[i];
        
    cout<<ans(arr , n-1);
    return 0;
}