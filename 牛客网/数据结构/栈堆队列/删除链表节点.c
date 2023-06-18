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
 * @param val int整型 
 * @return ListNode类
 */
struct ListNode* deleteNode(struct ListNode* head, int val ) 
{
    struct ListNode* p=head;
    
    if(p->next==NULL||p==NULL)
    {
        
        if(p==NULL)
        {
            return NULL;
        }
        if(p->val==val)
        {
            return NULL;
        }
    }
    else{

        while(p->next!=NULL)
    {
        if(p->val==val)
        {
            head=head->next;
            break;
        }
        else if(p->next->val==val)
        {
            p->next=p->next->next;
            break;
        }
        else 
        p=p->next;

    }
    }
    
    return head;
    // write code here
}