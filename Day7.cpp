class Solution
{
public:
    void solve(Node *root, vector<int> &ans)
    {
        if (root == NULL)
            return;
        solve(root->left, ans);
        ans.push_back(root->data);
        solve(root->right, ans);
        return;
    }

    Node *flattenBST(Node *root)
    {
        // code here
        vector<int> ans;
        solve(root, ans);

        root = NULL;
        Node *temp = NULL;

        for (int i = 0; i < ans.size(); i++)
        {
            Node *newNode = new Node(ans[i]);

            if (root == NULL)
            {
                root = newNode;
                temp = newNode;
            }
            else
            {
                temp->right = newNode;
                temp = newNode;
            }
        }
        return root;
    }
};