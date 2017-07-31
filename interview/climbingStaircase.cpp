
// codefights.com interview climbingStaircase

std::vector<std::vector<int>> climbingStaircase(int n, int k)
{
    vector<vector<int>> res;

    helper(res, n, 0, vector<int>{});

    return res;
}

void helper(vector<vector<int>> &res, int n, int k, vector<int> &cur)
{
    if (n == 0)
    {
        res.push_back(cur);
        return;
    }

    for (int i = 1; i <= min(n, k); ++i)
    {
        cur.push_back(i);
        helper(res, n - i, k, cur);
        cur.pop_back();
    }
}
