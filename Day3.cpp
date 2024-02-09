class Solution
{
public:
    // Function to check whether all nodes of a tree have the value
    // equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
        // Add your code here
        if (root == NULL)
            return 1;

        if (root->left == NULL && root->right == NULL)
        {
            return 1;
        }
        else
        {
            int temp;
            if (root->left == NULL && root->right != NULL)
            {
                temp = root->right->data;
            }
            else if (root->left != NULL && root->right == NULL)
            {
                temp = root->left->data;
            }
            else
            {
                temp = root->left->data + root->right->data;
            }

            if (root->data != temp)
            {
                return 0;
            }
        }
        int left = isSumProperty(root->left);
        int right = isSumProperty(root->right);

        return left & right;
    }
};