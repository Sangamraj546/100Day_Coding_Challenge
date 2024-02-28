class Solution
{
public:
    string longestCommonPrefix(string arr[], int N)
    {
        // your code here
        sort(arr, arr + N);
        string check = arr[0];

        for (int i = 0; i < N; i++)
        {
            int sz = check.size();
            if (arr[i].substr(0, sz) == check)
            {
            }
            else
            {
                i = 0;
                check.pop_back();
            }
        }
        if (check.size())
        {
            return check;
        }
        return "-1";
    }
};