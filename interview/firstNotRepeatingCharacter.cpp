
// codefights.com interview firstNotRepeatingCharacter

char firstNotRepeatingCharacter(std::string s) {
    vector<int> cnt(26, 0) ;
    
    vector<int> order(26, -1) ;
    
    char result = '_' ;
    
    for(int i = 0 ; i < s.length() ; i++)
    {
        int idx = s[i] - 'a' ;
        
        cnt[idx] += 1 ;
        
        if(order[idx] == -1)
        {
            order[idx] = i ;
        }
        
    }
    
    int first = INT_MAX ;
    
    for(int i = 0 ; i < cnt.size() ; i++)
    {
        if(cnt[i] == 1)
        {
            if(order[i] < first)
            {
                first = order[i] ;
                result = (char) (i + 'a') ;
            }
        }
    }
    
    return result ;

}
