class Solution
{
public:
    /*You are required to complete this method */
    int findMaxDiff(int arr[], int n)
    {
        vector<int> lm;
        vector<int> rm;
        stack<int> s;
        stack<int> r;

        for (int i = 0; i < n; i++)
        {
            while (!s.empty())
            {
                if (arr[i] > s.top())
                {
                    lm.push_back(s.top());
                    break;
                }
                s.pop();
            }
            if (s.size() == 0)
                lm.push_back(0);
            s.push(arr[i]);
        }

        for (int i = n - 1; i >= 0; i--)
        {
            while (!r.empty())
            {
                if (arr[i] > r.top())
                {
                    rm.push_back(r.top());
                    break;
                }
                r.pop();
            }
            if (r.size() == 0)
                rm.push_back(0);
            r.push(arr[i]);
        }
        reverse(rm.begin(), rm.end());

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int maxi = abs(lm[i] - rm[i]);
            ans = max(ans, maxi);
        }
        return ans;
    }
};
