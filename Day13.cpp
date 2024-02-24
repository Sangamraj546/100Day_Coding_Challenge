class Solution
{
public:
    int maxSum(int n)
    {
        // code here.
        if (n <= 1)
        {
            return n;
        }

        int num1 = maxSum(n / 2);
        int num2 = maxSum(n / 3);
        int num3 = maxSum(n / 4);

        return max(n, num1 + num2 + num3);
    }
};