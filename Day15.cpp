class Solution
{
public:
    vector<string> AllPossibleStrings(string s)
    {
        vector<string> ans;
        int n = s.size();
        for (int i = 0; i <= pow(2, n); i++)
        {
            string temp = "";
            for (int j = 0; j < n; j++)
            {
                if ((i >> j) & 1 == 1)
                {
                    temp += s[j];
                }
            }
            if (temp.size() >= 1)
                ans.push_back(temp);
        }
        sort(begin(ans), end(ans));
        return ans;
    }
};