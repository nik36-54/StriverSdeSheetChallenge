#include <bits/stdc++.h>
long getTrappedWater(long *arr, int n)
{
    long l[n], r[n];
    l[0] = arr[0];
    r[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
        l[i] = max(arr[i], l[i - 1]);

    for (int i = n - 2; i >= 0; i--)
        r[i] = max(arr[i], r[i + 1]);
    long ans = 0;
    for (int i = 1; i < n - 1; i++)
        ans += min(l[i], r[i]) - arr[i];

    return ans;
}