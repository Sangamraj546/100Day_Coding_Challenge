class Solution
{
public:
    int minValue(string s, int k)
    {

        priority_queue<int> pq;
        unordered_map<char, int> mp;

        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }

        for (auto it : mp)
        {
            pq.push(it.second);
        }

        while (k--)
        {
            int temp = pq.top();
            pq.pop();
            pq.push(temp - 1);
        }
        int ans = 0;
        while (!pq.empty())
        {
            int temp = pq.top();
            pq.pop();
            ans += pow(temp, 2);
        }
        return ans;
    }
};