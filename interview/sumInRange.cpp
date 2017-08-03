
// codefights.com interview sumInRange

int sumInRange(std::vector<int> nums, std::vector<std::vector<int>> queries) {
    
    if(nums.empty()) return 0;
    
    vector<int> dp(nums.size() + 1, 0) ;
    
    int res = 0, mod  =  1000000000 + 7 ;
    
    for(int i = 1 ; i <= nums.size() ; i++)
    {
        dp[i] = dp[i-1] + nums[i-1] ;
        dp[i] %= mod ;
    }
    
    
    for(auto& q : queries)
    {
        res += dp[q[1] + 1] - dp[q[0]] ;
        res %= mod ;
    }
    
    return res > 0? res % mod : mod + res ;
    
}
