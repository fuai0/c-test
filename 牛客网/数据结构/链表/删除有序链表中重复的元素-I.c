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
 * @return ListNode��
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