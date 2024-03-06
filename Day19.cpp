class Solution
{
public:
    // The main function that returns the arrangement with the largest value as
    // string.
    // The function accepts a vector of strings

    static bool comp(string x, string y)
    {
        return x + y > y + x;
    }

    string printLargest(int n, vector<string> &arr)
    {

        sort(arr.begin(), arr.end(), comp);
        string ans = "";

        for (int i = 0; i < n; i++)
            ans += arr[i];

        return ans;
    }
};