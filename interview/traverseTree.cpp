
// codefighs.com interview traverseTree

//
// Definition for binary tree:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };
std::vector<int> traverseTree(Tree<int> * root) {

    vector<int> res;
    
    if (root == NULL) return res;

    queue<Tree<int> *> q;
    
    q.push(root);
    
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            Tree<int> *node = q.front();
            q.pop();
            res.push_back(node->value);
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }
    return res;
}
