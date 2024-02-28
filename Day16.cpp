class Solution
{
public:
    int DivisibleByEight(string s)
    {
        // code here
        int n = s.size();

        if (n > 3)
            s = s.substr(n - 3, 3);

        if (stoi(s) % 8 == 0)
            return 1;

        return -1;
    }
};