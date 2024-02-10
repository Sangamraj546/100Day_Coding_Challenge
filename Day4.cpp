int height(Node *root, int x)
{
    if (root == NULL)
        return -1;

    if (root->data == x)
        return 0;

    int left = height(root->left, x);
    int right = height(root->right, x);

    if (left == -1 && right == -1)
        return -1;

    if (left > right)
    {
        return left + 1;
    }
    else
    {
        return right + 1;
    }
}
void cousins(Node *root, int num, int &temp)
{
    if (root == NULL)
        return;

    if ((root->left != NULL && root->left->data == num) || (root->right != NULL && root->right->data == num))
    {
        temp = root->data;
        return;
    }
    cousins(root->left, num, temp);
    cousins(root->right, num, temp);
}
bool isCousins(Node *root, int a, int b)
{
    if (root == NULL)
        return false;
    int h1 = height(root, a);
    int h2 = height(root, b);
    if (h1 == -1 || h2 == -1 || h1 != h2)
        return false;
    int c1 = -1, c2 = -1;
    cousins(root, a, c1);
    cousins(root, b, c2);
    if (c1 == -1 || c2 == -1)
        return false;
    return c1 != c2;
}