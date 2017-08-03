
// codefights.com interview largestValuesInTreeRows

//
// Definition for binary tree:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };

std::vector<int> largestValuesInTreeRows(Tree<int> *root)
{

    if (root == nullptr)
        return {};

    vector<Tree<int> *> level, t;

    vector<int> result = {};

    level.push_back(root);

    while (level.size() > 0)
    {
        auto mx = max_element(level.begin(), level.end(),
                              [](auto a, auto b) {
                                  return a->value < b->value;
                              });

        result.push_back((*mx)->value);

        t = {};

        for (auto &node : level)
        {
            if (node->left)
                t.push_back(node->left);

            if (node->right)
                t.push_back(node->right);
        }

        level = t;
    }

    return result;
}
