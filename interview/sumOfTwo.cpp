
// codefights.com interview sumOfTwo

bool sumOfTwo(std::vector<int> a, std::vector<int> b, int v)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (auto &num : a)
    {
        if (binary_search(b.begin(), b.end(), v - num))
            return true;
    }

    return false;
}
