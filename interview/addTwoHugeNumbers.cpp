
// codefights.com interview addTwoHugeNumbers

ListNode<int> *addTwoHugeNumbers(ListNode<int> *a, ListNode<int> *b)
{
    vector<int> v1, v2;

    while (a)
    {
        v1.insert(v1.begin(), a->value);
        a = a->next;
    }

    while (b)
    {
        v2.insert(v2.begin(), b->value);
        b = b->next;
    }

    // reverse(v1.begin(), v1.end()) ;
    // reverse(v2.begin(), v2.end()) ;
    // add two vectors together

    vector<int> res;
    int i, carry = 0, s = 0;

    for (i = 0; i < v1.size() && i < v2.size(); i++)
    {
        s = (v1[i] + v2[i] + carry) % 10000;
        res.push_back(s);
        carry = (v1[i] + v2[i] + carry) / 10000;
    }

    while (i < v1.size())
    {
        s = (v1[i] + carry) % 10000;
        res.push_back(s);
        carry = (v1[i] + carry) / 10000;
        ++i;
    }

    while (i < v2.size())
    {
        s = (v2[i] + carry) % 10000;
        res.push_back(s);
        carry = (v2[i] + carry) / 10000;
        ++i;
    }

    if (carry)
        res.push_back(carry);

    ListNode<int> *header = new ListNode<int>(-1);

    for (int i = 0; i < res.size(); i++)
    {
        ListNode<int> *node = new ListNode<int>(res[i]);
        node->next = header->next;
        header->next = node;
    }

    return header->next;
}
