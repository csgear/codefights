
// codefights.com interview soduku2

bool sudoku2(std::vector<std::vector<char>> grid) {
    if(grid.empty() || grid[0].empty()) return false ;
    
    int m = grid.size(), n = grid[0].size() ;
    
    vector<vector<bool>> rows(m, vector<bool>(n, false)) ;
    vector<vector<bool>> cols(m, vector<bool>(n, false)) ;
    vector<vector<bool>> cells(m, vector<bool>(n, false)) ;
    
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(grid[i][j] >= '1' && grid[i][j] <= '9')
            {
                int c = grid[i][j] - '1' ;
                
                if(rows[i][c] || cols[j][c] || cells[3 * (i / 3) + j / 3][c]) return false ;
                
                rows[i][c] = true ;
                cols[j][c] = true ;
                cells[3 * (i / 3) + j / 3][c] = true ;
            }
        }
    }
    
    return true ;

}
