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
 * @return int����
 */
#include <stdio.h>
int FindGreatestSumOfSubArray(struct ListNode* head ) 
{
    struct ListNode* p = head;
    int max = head->val;
    while(p->next != NULL)
    {

        p->next->val += p->val;
        printf("%d ",max);
        if(max<p->next->val)
        {
            max=p->next->val;
        }
        p = p->next;
        if(p->val<0)
        {
            p->val=0;
        }

    }
    return max;
    // write code here
}