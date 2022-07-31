long double multiply(double number, int n)
{
    long double ans = 1.0;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * number;
    }
    return ans;
}

long double findNthRootOfM(int n, int m)
{
    long double low = 1;
    long double high = m;
    long double eps = 1e-9;

    while ((high - low) > eps)
    {
        long double mid = (low + high) / 2.0;
        if (multiply(mid, n) < m)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}