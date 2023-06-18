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
 * @param k int整型 
 * @return ListNode类
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