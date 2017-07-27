
// codefighs.com interview areFollowingPatterns

bool areFollowingPatterns(std::vector<std::string> strings, std::vector<std::string> patterns) {

    for(int i = 0 ; i < strings.size() ; i++)
    {
        for(int j = i + 1 ; j < strings.size() ; j++)
        {
            if( (strings[i] == strings[j] && patterns[i] != patterns[j]) || (strings[i] != strings[j] && patterns[i] == patterns[j])  )
                return false ;
        }
    }
    
    return true ;
}
