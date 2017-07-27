
// codefights.com interview containsDuplicates

bool containsDuplicates(std::vector<int> a) {
    map<int, int> m ;
    
    for(auto &num : a)
    {
        if(m.count(num) == 1) return true ;
        
        m[num] = 1 ;
    }
    
    return false ;
}
