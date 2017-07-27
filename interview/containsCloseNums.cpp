
// codefights.com interview containsCloseNums

bool containsCloseNums(std::vector<int> nums, int k) {
    map<int, pair<int, int>> pos ;
    
    for(int i = 0 ; i < nums.size() ; i++)
    {
        if(pos.count(nums[i]) == 0)
        {
            pos[nums[i]] = make_pair(INT_MAX, i) ;
        }
        else
        {
            pair<int, int>& v = pos[nums[i]] ;
            
            if(i - v.second < v.first)
            {
                v.first = i - v.second ;
                v.second = i ;
            }
        }
    }
    
    for(auto& p : pos)
    {
        pair<int, int>& v = p.second ;
        
        if(v.first <= k ) return true ;
    }
    
    return false ;
}

