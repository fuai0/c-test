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
 * @return int整型
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