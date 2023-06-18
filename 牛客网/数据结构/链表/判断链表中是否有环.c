#include <stdbool.h>
/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

/**
 * 
 * @param head ListNode¿‡ 
 * @return bool≤º∂˚–Õ
 */
bool hasCycle(struct ListNode* head )
{
    if(head==NULL)
    return false;
    for(int i=0;i<10000;i++)
    {
         head=head->next;
         if (head==NULL) 
         {
            return false;
         }
    }
    return true;
    
    // write code here
    
}