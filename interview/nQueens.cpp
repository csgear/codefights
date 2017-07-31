
// leetcode.com interview nQueens

std::vector<std::vector<int>> nQueens(int n) {
    
    vector<vector<int>> res ;
    
    vector<int> m(n, -1) ;
    
    solveNQueensDFS(res, m, 0, n) ;
    
    return res ;
}


bool isValid(vector<int>& cols, int row, int col)
{
    
    for(int i = 0 ; i < row ; i++)
    {
        if (col == cols[i] || abs(row - i) == abs(col - cols[i])) {
            return false;
        }
    }
    
    return true ;
}

void solveNQueensDFS(vector<vector<int>>& result, vector<int>& cols, int curr, int n) {
    
    if(curr == n)
    {
        vector<int> conf = cols ;
        
        std::for_each(conf.begin(), conf.end(), [](int &n){ n++; });
        
        result.push_back(conf) ;
    }
    else
    {
        for(int col = 0 ; col < n ; col++)
        {
            if(isValid(cols, curr, col))
            {
                cols[curr] = col ;
                solveNQueensDFS(result, cols, curr + 1, n) ;
                cols[curr] = -1 ;
            }
        }
    }
    
}


