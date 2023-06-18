/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

/**
 * 
 * @param head ListNodeÀà the head
 * @return bool²¼¶ûÐÍ
 */
bool isPail(struct ListNode* head ) 
{
    int size=0;
    struct ListNode* p=head;
    while(p){
        size++;
        p=p->next;
    }
    int *arr=malloc(sizeof(int)*size);
    p=head;
    int i=0,j=size-1;
    while(p){
        arr[i]=p->val;
        p=p->next;
        i++;
    }
    i=0;
    while(i<j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;

    // write code here
}