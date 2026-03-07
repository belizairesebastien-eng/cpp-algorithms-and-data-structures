#include <iostream>

struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


bool isSameTree(TreeNode* a, TreeNode* b){
    if (a == nullptr && b == nullptr){
        return true;
    }
    if(a == nullptr || b == nullptr ){
        return false;
    }
    if (a->val != b->val){
        return false;
    }

    return isSameTree(a->left, b->left) && isSameTree(a->right, b->right);
}

int main(){
TreeNode* p = new TreeNode(1);
p->left = new TreeNode(2);
p->right = new TreeNode(3);

TreeNode* q = new TreeNode(1);
q->left = new TreeNode(2);
q->right = new TreeNode(3);

std::cout << isSameTree(p, q) << std::endl;


TreeNode* a = new TreeNode(1);
a->left = new TreeNode(2);

TreeNode* b = new TreeNode(1);
b->right = new TreeNode(2);

std::cout << isSameTree(a, b) << std::endl;

}