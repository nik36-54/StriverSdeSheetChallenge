bool isPoss(vector<int> &arr, int n, int m, long long mid)
{
    long long cnt = 1;
    long long sum = 0;

    for (int i = 0; i < m; i++)
    {
        if (sum + arr[i] <= mid)
            sum += arr[i];
        else
        {
            cnt++;
            if (cnt > n || arr[i] > mid)
                return false;
            sum = arr[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time)
{
    long long low = 0, sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += time[i];
    }
    long long high = sum;
    long long ans = -1;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (isPoss(time, n, m, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}