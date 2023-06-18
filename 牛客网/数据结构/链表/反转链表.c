/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

/**
 * 
 * @param pHead ListNodeÀà 
 * @return ListNodeÀà
 */
struct ListNode* ReverseList(struct ListNode* pHead ) {
    if(pHead==NULL||pHead->next==NULL)
    return pHead;
    struct ListNode* l=pHead;  
    struct ListNode* la=l->next;
    struct ListNode* laa=la->next;
    l->next=NULL;

    while(laa!=NULL)
    {
        la->next=l;
        l=la;
        la=laa;
        laa=laa->next;
    }
    la->next=l;
    return la;
}