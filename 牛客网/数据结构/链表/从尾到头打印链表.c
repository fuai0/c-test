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
 * @param listNode ListNode�� 
 * @return int����һά����
 * @return int* returnSize ������������
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