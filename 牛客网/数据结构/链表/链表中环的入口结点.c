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
 * @return ListNode��
 */
#include <math.h>
struct ListNode* EntryNodeOfLoop(struct ListNode* pHead ) 
{
    struct ListNode* p =pHead;
    for(int i = 0;i<10000;i++)
    {
        p=p->next;
        if(p==NULL)
        {
            return NULL;
        }
    }
    p=pHead;
    while(p->next!=NULL)
    {
        int temp =p->val;
        struct ListNode* pa=p->next; 
        for(int i =0;i<10000;i++)
        {
            if(pa->val == temp)
            {
                return pa;

            }
            pa = pa->next;
        }
        p = p->next;
    }
    return NULL;
    // write code here
}