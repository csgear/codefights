
// codefighs.com interview findLongestSubarrayBySum

std::vector<int> findLongestSubarrayBySum(int k, std::vector<int> nums) {
    
       std::unordered_map<int, int> mp;

        vector<int> v;

        int sum = 0, maxlen = INT_MIN;

        for (int i = 0; i < nums.size(); ++i)
        {
            sum += nums[i] ;
            if (sum == k)
            {
                maxlen = i + 1;
                v = {0, i};
            }

            if (mp.count(sum - k))
            {
                if (i - mp[sum - k] > maxlen)
                {
                    maxlen = i - mp[sum - k];
                    v = { mp[sum - k] + 1, i };
                }
            }

            if (!mp.count(sum))
            {
                mp[sum] = i;
            }
        }

        if (maxlen == INT_MIN)
        {
            v = {-1};
        }
        else
        {
            v = {v[0] + 1, v[1] + 1};
        }
        
        return v;
}


std::vector<int> findLongestSubarrayBySumTLE(int k, std::vector<int> nums)
{
    int n = nums.size();

    vector<int> sums(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        sums[i] = sums[i - 1] + nums[i - 1];
    }

    int left = 0, mx = INT_MIN;

    vector<int> res = {-1};

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (sums[i] - sums[j] == k)
            {
                if (i - j > mx)
                {
                    left = j;
                    mx = i - j;
                    res = {j + 1, i};
                }
            }
        }
    }
    return res;
}
