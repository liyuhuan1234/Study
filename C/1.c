//求叶子节点个数
int GetLeafNode(BTNode *root)
{
    if(root == NULL)
        return 0;
    if(root->lchild == NULL && root->rchild == NULL)
        return 1;
    return GetLeafNode(root->lchild) + GetLeafNode(root->rchild);
}