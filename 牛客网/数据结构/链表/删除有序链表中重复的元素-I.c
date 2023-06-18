/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param head ListNode类 
 * @return ListNode类
 */
struct ListNode* deleteDuplicates(struct ListNode* head )
{
    struct ListNode* p = head;
    if(p ==NULL)
    return head;
    struct ListNode* pa = p->next;
    while(pa !=NULL)
    {
        if(pa->val==p->val)
        {
        struct ListNode* temp = pa;
           pa = pa->next;
           p->next = pa;
           free(temp);
           temp = NULL;
        }
        else {
            p = p->next;
            pa = pa->next;
        }
    }
    return head;
    // write code here
}