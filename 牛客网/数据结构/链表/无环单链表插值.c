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
 * @param A int整型一维数组 
 * @param ALen int A数组长度
 * @param val int整型 
 * @return ListNode类
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