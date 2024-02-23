void inorder(struct Node *root, vector<int> &ans)
{

    if (root == NULL)
    {
        return;
    }

    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}
float findMedian(struct Node *root)
{
    vector<int> ans;
    inorder(root, ans);

    int n = ans.size();
    if (n % 2 == 0)
    {

        return (ans[n / 2 - 1] + ans[n / 2]) / 2.0;
    }
    else
    {
        return ans[(n) / 2];
    }
}
