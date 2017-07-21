
// codefights.com interview rotateImage
std::vector<std::vector<int>> rotateImage(std::vector<std::vector<int>> matrix) {
    int n = matrix.size() ;
        
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = i + 1 ; j < n ; ++j)
        {
            swap(matrix[i][j], matrix[j][i]) ;
        }
            
        reverse(matrix[i].begin(), matrix[i].end()) ;
    }
    
    return matrix ;

}
