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
 * @param m int���� 
 * @param n int���� 
 * @return ListNode��
 */
struct ListNode* reverseBetween(struct ListNode* head, int m, int n ) 
{
    struct ListNode* p = head;
    struct ListNode* pa = head;
   
    for(int i =0;i<m-2;i++)
    {
        p = p->next;
    }
    for(int i =0;i<n-1;i++)
    {
        pa=pa->next;
    } 
    if(m == 1)
    {
        while(p != pa)
        {
            struct ListNode* paa=p->next;
            p->next =pa->next;
            pa->next = p;
            p = paa;
        }
        return p;
    }
    else 
    {
        for(int i =0;i<n-m;i++)
        {
            struct ListNode* paa=p->next;
            p->next=p->next->next;
            paa->next = pa->next;
            pa->next = paa;
        }
        return head;
    }
    // write code here
}