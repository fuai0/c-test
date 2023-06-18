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
 * @param listNode ListNode类 
 * @return int整型一维数组
 * @return int* returnSize 返回数组行数
 */
int* printListFromTailToHead(struct ListNode* listNode, int* returnSize ) 
{
    int arr[10000]={0};
    struct ListNode* list = listNode;
    int i=0;
    while(list!= NULL)
    {
        arr[i++]=list->val;
        list=list->next;
    }
    int arr1[10000] ={0}; 
    for(int w=0;w<i;w++)
    {
        arr1[w] = arr[i-w-1];

    }
    *returnSize = i;
    return arr1;
    // write code here
}