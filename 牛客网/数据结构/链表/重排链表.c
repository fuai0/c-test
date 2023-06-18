/**
 * struct ListNode {
 * int val;
 * struct ListNode *next;
 * };
 */
 
/**
 * 
 * @param head ListNodeÀà 
 * @return  void
 */
 
struct ListNode *FindLastNode(struct ListNode *head)
{
    if (head->next == NULL) {
        return head;
    }
 
    struct ListNode *temp = head->next;
    if (temp->next == NULL) {
        head->next = NULL;
        return temp;
    }
 
    return FindLastNode(head->next);
}
 
void reorderList(struct ListNode* head ) {
    // write code here
    struct ListNode *temp = head;
    struct ListNode *lastNode = NULL;
 
    if ((head == NULL) || (head->next == NULL)) {
        return;
    }
 
    while (temp != NULL) {
        lastNode = FindLastNode(temp);
        lastNode->next = temp->next;
        if (temp != lastNode) {
            temp->next = lastNode;
        }
        temp = lastNode->next;
    }
}