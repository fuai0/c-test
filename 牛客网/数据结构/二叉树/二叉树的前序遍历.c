/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param root TreeNode类 
 * @return int整型一维数组
 * @return int* returnSize 返回数组行数
 */
 int count=0;int arr[101];
void xian(struct TreeNode* root,int* arr)
 {
    if(root==NULL)
    {
        
    }
    else 
    {
        arr[count++]=root->val;
        xian(root->left,arr);
        xian(root->right,arr);
    }
    
 }

int* preorderTraversal(struct TreeNode* root, int* returnSize ) 
{

    
    xian(root,arr);
    *returnSize=count;
    return arr;
    // write code here
}