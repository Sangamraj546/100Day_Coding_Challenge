class Solution
{
public:
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        // Your code here
        if (root == NULL)
            return true;
        int d = -1, level = 0;
        bool ans = true;
        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                Node *temp = q.front();
                q.pop();

                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);

                if (temp->left == NULL && temp->right == NULL)
                {
                    if (d == -1)
                    {
                        d = level;
                    }
                    else if (d != level)
                    {
                        ans = false;
                        break;
                    }
                }
            }
            level++;
        }

        return ans;
    }
};