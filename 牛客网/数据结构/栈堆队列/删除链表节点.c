/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */
/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 * 
 * @param head ListNode�� 
 * @param val int���� 
 * @return ListNode��
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