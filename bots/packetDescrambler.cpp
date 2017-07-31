
// codefights.com spacex bot

#include <vector>
#include <string>
#include <map>

std::string packetDescrambler(std::vector<int> seq, std::vector<char> fragmentData, int n) {
    map<int, vector<char>> seqs ;

    const int ASCII_SIZE 256

    for(int i = 0 ; i < seq.size() ; i++)
    {
        if(seqs.count(seq[i]) == 0)
        {
            seqs[seq[i]] = vector<char>{fragmentData[i]} ;
        }
        else
        {
            seqs[seq[i]].push_back(fragmentData[i]) ;
        }
    }

    string res = "" ;
    int sz = seqs.size() ;

    for(auto& a : seqs)
    {
        vector<char> v = a.second ;

        int count[ASCII_SIZE] = {0};

        for(int i = 0 ; i < v.size() ; i++)
            count[v[i]]++;

        int mx = -1 ;
        char result ;
        for (int i = 0; i < len; i++) {
        if (max < count[v[i]]) {
            max = count[v[i]];
            result = v[i];
        }

        if(max * 2 >= n) res += result ;
    }
            
    // if res.size() == count && res end with '#' 

    return res ;
}
