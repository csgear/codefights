
// codefights.com  interview isCryptSolution

string findCrypt(string& s, std::vector<std::vector<char>>& solution)
{
    string res = "" ;
    
    for(int i = 0 ; i < s.length() ; i++)
    {
        for(int j = 0 ; j < solution.size() ; j++)
        {
            if(s[i] == solution[j][0])
            {
                res += solution[j][1] ;
            }
        }
    }
    return res ;
    
}

bool isCryptSolution(std::vector<std::string> crypt, std::vector<std::vector<char>> solution) {
    
    string s1, s2, s3 ;
    
    s1 = findCrypt(crypt[0], solution) ;
    s2 = findCrypt(crypt[1], solution) ;
    s3 = findCrypt(crypt[2], solution) ;
    
    if( (s1[0] == '0'  && s1.length() > 1) || (s2[0] == '0' && s2.length() > 0) || (s3[0] == '0' && s3.length() > 0) )  return false ;
    
    if(stoll(s1) + stoll(s2) == stoll(s3)) return true ;
    
    else return false ;
    
}

