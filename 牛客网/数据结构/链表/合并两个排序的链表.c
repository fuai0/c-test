/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

/**
 * 
 * @param pHead1 ListNodeÀà 
 * @param pHead2 ListNodeÀà 
 * @return ListNodeÀà
 */
struct ListNode* Merge(struct ListNode* pHead1, struct ListNode* pHead2 ) {
    if(pHead1==NULL)
    {
        return pHead2;
    }
    if(pHead2==NULL)
    {
        return pHead1;
    }
    struct ListNode* p=pHead1;
    struct ListNode* p1=pHead1->next;
    struct ListNode* pa=pHead2;
	struct ListNode* pa1=pHead2->next;
	if(pHead1->val<=pHead2->val)
    {
        while(p!=NULL&&pa!=NULL)
        {
            if(p1==NULL)
            {
                p->next=pa;
                break;
            }
            if(p1->val<=pa->val)
            {
                p=p->next;
                p1=p1->next;
            }
            else 
            {
                pa->next=p1;
                p->next=pa;
                p=pa;
                pa=pa1;
                if(pa1==NULL)
                break;
                pa1=pa1->next;
            }
        }
        return pHead1;
    }
    else
    {
        while(pa!=NULL&&p!=NULL)
        {
            if(pa1==NULL)
            {
                pa->next=p;
                break;
            }
            if(pa1->val<=p->val)
            {
                pa=pa->next;
                pa1=pa1->next;
            }
            else 
            {
                p->next=pa1;
                pa->next=p;
                pa=p;
                p=p1;
                if(p1==NULL)
                break;
                p1=p1->next;
            }
        }
        return pHead2;
    }

    // write code here
}