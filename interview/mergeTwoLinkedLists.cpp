
// codefights.com interview mergeTwoLinkedLists

ListNode<int> * mergeTwoLinkedLists(ListNode<int> * l1, ListNode<int> * l2) {
    if(l1 == nullptr) return l2 ;
    if(l2 == nullptr) return l1 ;
 
    if(l1->value < l2->value)
    {
        l1->next = mergeTwoLinkedLists(l1->next, l2) ;
        return l1 ;
    }
    else 
    {
        l2->next = mergeTwoLinkedLists(l2->next, l1);
        return l2;
    }
}