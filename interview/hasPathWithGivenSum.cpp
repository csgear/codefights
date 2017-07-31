
// codefights.com interview hasPathWithGivenSum

//
// Definition for binary tree:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };
bool hasPathWithGivenSum(Tree<int> * root, int s) {
    
    // deal with special case 
    if(root == nullptr)  return s == 0 ;  
     
    return helper(root, s) ;
}

bool helper(Tree<int> *root, int s)
{
    if(root == nullptr) return false ;
     
    if(root->left == nullptr && root->right == nullptr && root->value == s)  return true ;
     
    return helper(root->left, s - root->value) || helper(root->right, s - root->value) ;

} 
