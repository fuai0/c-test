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
struct ListNode* FindFirstCommonNode(struct ListNode* pHead1, struct ListNode* pHead2 ) 
{
    struct ListNode* l=pHead1;
    struct ListNode* la=pHead2;
    int count1=0;
    int count2=0;
    while(l!=NULL||la!=NULL)
    {
        if(l!=NULL)
        {
            l=l->next;
            count1++;
        }
        if(la!=NULL)
        {
            la=la->next;
            count2++;
        }
    }
    l=pHead1;
    la=pHead2;
    if(count1>=count2)
    {
         int x=count1-count2;
         for(int i=0;i<x;i++)
         {
            l=l->next;
         }
         int j=0;
         for(j=0;j<count2;j++)
         {
            if(l==la)
            {
                break;
            }
            else 
            {
                l=l->next;
                la=la->next;
                if(l==NULL||la==NULL)
                return NULL;
            }
         }
    }
    else if(count1<count2)
    {
        int x=count2-count1;
        for(int i=0;i<x;i++)
         {
            la=la->next;
         }
         int j=0;
         for(j=0;j<count1;j++)
         {
            if(l==la)
            {
                break;
            }
            else 
            {
                l=l->next;
                la=la->next;
                if(l==NULL||la==NULL)
                return NULL;
            }
         }
    }
   return l;
    // write code here
}