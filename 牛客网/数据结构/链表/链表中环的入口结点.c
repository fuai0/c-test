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
 * @param pHead ListNode类 
 * @return ListNode类
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