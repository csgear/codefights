

//
// Definition for binary tree:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };
bool isTreeSymmetric(Tree<int> * root) {
    if(root == nullptr)  return true ;

    queue<Tree<int> *> q1, q2;

    q1.push(root->left) ; q2->push(root->right)

    while(!q1.empty() && !q2.empty())
    {
        Tree<int> *t1 = q1.front() ;
        Tree<int> *t2 = q2.front() ;

        q1.pop() ; q2.pop() ;

        if( (t1 && !t2)|| (!t1 && t2)) return false ;

        if(t1)
        {
            if(t1->value != t2->value) return false ;

            q1.push(t1->left) ; q1->push(t1->right) ;

            q2.push(t2->right) ; q2.push(t1->right) ;
        }
    }

    return true ;
}
