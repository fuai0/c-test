/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */
/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 * 
 * @param root TreeNode�� 
 * @return int����һά����
 * @return int* returnSize ������������
 */
  int count=0;int arr[1001];
void xian(struct TreeNode* root,int* arr)
 {
    if(root==NULL)
    {
        
    }
    else 
    { 
        xian(root->left,arr);
        arr[count++]=root->val;
       
        xian(root->right,arr);
    }
    
 }

int* inorderTraversal(struct TreeNode* root, int* returnSize ) 
{
     xian(root,arr);
    *returnSize=count;
    return arr;
    // write code here
}