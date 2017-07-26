// codefights.com interview reverseNodesInKGroups

// Definition for singly-linked list:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
ListNode<int> * reverseNodesInKGroups(ListNode<int> * head, int k) {
    if (!head || k == 1) return head;
    ListNode<int> *dummy = new ListNode<int>(-1);
    ListNode<int> *pre = dummy, *cur = head;
    dummy->next = head;
    int i = 0;
    while (cur) {
        ++i;
        if (i % k == 0) {
            pre = reverseOneGroup(pre, cur->next);
            cur = pre->next;
        } else {
            cur = cur->next;
        }
    }
    return dummy->next;
}

ListNode<int> *reverseOneGroup(ListNode<int> *pre, ListNode<int> *next) {
    ListNode<int> *last = pre->next;
    ListNode<int> *cur = last->next;
    while(cur != next) {
        last->next = cur->next;
        cur->next = pre->next;
        pre->next = cur;
        cur = last->next;
    }
    return last;
}
