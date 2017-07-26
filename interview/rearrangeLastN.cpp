
// codefights interview rearrangeLastN

ListNode<int> * rearrangeLastN(ListNode<int> * head, int n) {
    ListNode<int> *first, *last ;
    
    ListNode<int> *dummy = new ListNode<int>(-1) ;
    
    dummy->next = head ;
    
    first = dummy ; last = dummy ;
    
    for(int i = 0 ; i < n ; i++) last = last->next ;
    
    while(last->next) { first = first->next ; last = last->next ;}
    
    cout << first->value << " " << last->value << endl ;
    
    if(first != dummy)
    {
        last->next = dummy->next ;
    
        dummy->next = first->next ;
    
        first->next = nullptr ;
    }
    
    return dummy->next ;
    
}