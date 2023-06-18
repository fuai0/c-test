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
 * @return ListNode类
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