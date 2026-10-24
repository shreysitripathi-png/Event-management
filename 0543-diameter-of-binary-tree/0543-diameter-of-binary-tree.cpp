/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int heightCalc(TreeNode* root, int &dia){
    if(root==nullptr){
        return 0;
    }
    int leftH = heightCalc(root->left, dia);
    int rightH = heightCalc(root->right, dia);
    int d = leftH + rightH;
    dia = max(d, dia);
    return 1 + max(leftH, rightH);
}
    int diameterOfBinaryTree(TreeNode* root) {
        int dia=0;
        heightCalc(root,dia);
        return dia;
        
    }
};