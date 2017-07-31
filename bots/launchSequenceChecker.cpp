
// spacex bots 

#include <vector>
#include <string>
#include <unordered_map>

using namespace std ;

bool launchSequenceChecker(std::vector<std::string> systemNames, std::vector<int> stepNumbers)
{
    unordered_map<string, vector<int>> m;

    for (int i = 0; i < systemNames.size(); i++)
    {
        if (m.count(systemNames[i]) == 0)
        {
            m[systemNames[i]] = vector<int> { stepNumbers[i] } ;
        }
        else
        {
            m[systemNames[i]].push_back(stepNumbers[i]) ;
        }
    }

    bool result = true ;

    for(auto& a: m)
    {
        vector<int> v = a.second ;

        if(v.size() > 1)
        {
            for(int j = 0 ; j < v.size() - 1 ; ++j)
            {
                if(v[j] >= v[j+1])  
                {
                    result = false ;
                    return result ;
                }
            }
        }

    }

    return result ;
}
