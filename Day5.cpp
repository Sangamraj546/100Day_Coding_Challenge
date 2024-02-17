
class Solution
{
public:
    void findgcd(Node *root, int &ans, int &mx)
    {
        if (!root)
        {
            return;
        }
        if (root->left and root->right)
        {
            int g = __gcd(root->left->data, root->right->data);
            if (g > mx)
            {
                ans = root->data;
                mx = g;
            }
            else if (g == mx)
            {
                ans = max(ans, root->data);
            }
        }
        findgcd(root->left, ans, mx);
        findgcd(root->right, ans, mx);
    }
    int maxGCD(Node *root)
    {
        // code here
        int ans = 0, mx = 0;
        findgcd(root, ans, mx);
        return ans;
    }
};
