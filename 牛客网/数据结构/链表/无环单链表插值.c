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
 * @param A int����һά���� 
 * @param ALen int A���鳤��
 * @param val int���� 
 * @return ListNode��
 */
#include <stdio.h>
#include <stdlib.h>
struct ListNode* insert(int* A, int ALen, int val ) 
{
    struct ListNode* list=(struct ListNode*)malloc(sizeof(struct ListNode*));
    list->next=NULL;
    list->val=0;
    struct ListNode* p = list;
    int arr[ALen+1];
    if(val>A[ALen-1])
    {
        for(int i =0;i<ALen;i++)
    {
           arr[i]=A[i];
    }
    arr[ALen]=val;

    }
    else{
    for(int i =0;i<ALen;i++)
    {
        if(A[i]>=val)
        {
            arr[i]=val;
            for(int w=i;w<ALen;w++)
            {
                arr[w+1]=A[w];
            }
            break;
        }
        arr[i]=A[i];   
    }}
    p->val=arr[0];
    for(int i = 1;i<=ALen;i++)
    {
        struct ListNode* pa=(struct ListNode*)malloc(sizeof(struct ListNode*));
        pa->next=NULL;
        pa->val=arr[i];
        p->next=pa;
        p=pa;
    }
    return list;
    
    
    // write code here
}