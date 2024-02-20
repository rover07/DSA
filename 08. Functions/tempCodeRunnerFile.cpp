 int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            ans += i;
        }
    }
    cout << ans;