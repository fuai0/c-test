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
struct ListNode* middleNode(struct ListNode* head )
{
    int i=0;
    struct ListNode* p=head;
    while(p!=NULL)
    {
        p=p->next;
        i++;
    }
    p=head;
    for(int w=0;w<i/2;w++)
    {
        p = p->next;

    }
    return p;
    // write code here
}