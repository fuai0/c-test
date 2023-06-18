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
 * @param m int整型 
 * @param n int整型 
 * @return ListNode类
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