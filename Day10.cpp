
class Solution
{
public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void fun(Node *root, set<int> &s)
    {
        if (root != NULL)
        {
            fun(root->left, s);
            root->data = *s.begin();
            s.erase(s.begin());
            fun(root->right, s);
        }
    }

    Node *binaryTreeToBST(Node *root)
    {
        set<int> s;
        queue<Node *> q;
        q.push(root);
        while (q.empty() == false)
        {
            Node *curr = q.front();
            q.pop();
            s.insert(curr->data);
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
        fun(root, s);
        return root;
    }
};