
// codefights.com interview removeKFromList

// Definition for singly-linked list:
 template<typename T>
 struct ListNode {
   ListNode(const T &v) : value(v), next(nullptr) {}
   T value;
   ListNode *next;
 };

ListNode<int> * removeKFromList(ListNode<int> * l, int k) {
    
    ListNode<int> *newHeader = new ListNode<int>(INT_MAX) ;
    newHeader->next = l ;
    
    ListNode<int>* prev = newHeader ;
    ListNode<int>* curr = newHeader->next ;
    
    while(curr != nullptr)
    {
        if(curr->value == k)
        {
            ListNode<int> *tmp = curr ;
            
            prev->next = curr->next ;
            curr = prev->next ;
            
            delete tmp ;
        }
        else
        {
            prev = curr ;
            curr = prev->next ;
        }
    }
    
    ListNode<int> *result = newHeader->next ;

    delete newHeader ;

    return result ;
}