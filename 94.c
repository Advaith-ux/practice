#include <stdio.h>
struct TreeNode
{
    int val;
    struct TreeNode * left;
    struct TreeNode * right;
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int countNodes(struct TreeNode * root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+countNodes(root->left)+countNodes(root->right);
}
// void inorder(struct TreeNode * root,int * out,int n,int * i)
// {
//     if(root==NULL)
//     {

//     }
//     if(root!=NULL && i<n)
//     {
//         inorder(root->left,out,n,i);
//         out[(*i)++]=root->val;
//         inorder(root->right,out,n,i);
//     }
// }
// int* inorderTraversal(struct TreeNode* root, int* returnSize) {
//     int n=countNodes(root);
//     int * out =(int * )malloc(sizeof(int)*n);
//     int a=0;
//     int * i=&a;
//     inorder(root,out,n,i);
// }
void util(struct TreeNode * root,int * arr,int * i)
{
    if(root==NULL)
    {
        return ;
    }
    util(root->left,arr,i);
    arr[(*i)++]=root->val;
    util(root->right,arr,i);
}
int * inorderTraversal(struct TreeNode * root,int * returnSize)
{
    *returnSize=0;
    int * arr=(int * )malloc(sizeof(int)*countNodes(root));
    util(root,arr,returnSize);
    return arr;
}
