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
 * @param pHead ListNode�� 
 * @param k int���� 
 * @return ListNode��
 */
struct ListNode* FindKthToTail(struct ListNode* pHead, int k ) 
{
    struct ListNode* l=pHead;
    int count=0;
    while(l!=NULL)
    {
        l=l->next;
        count++;
    }
    if(count>=k)
    {   
        for(int i=0;i<count-k;i++)
        {
            pHead=pHead->next;
        }
        return pHead;
    }
    else 
    {
    
    return NULL;
    }
    


    // write code here
}