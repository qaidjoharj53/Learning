def count(coins, N, sum):
    dp = [0] * (sum + 1)
    dp[0] = 1

    for i in range(N):
        for j in range(coins[i], sum + 1):
            dp[j] += dp[j - coins[i]]

    return dp[sum]


# Test cases
coins1 = [1, 2, 3]
N1 = 3
sum1 = 4
print(count(coins1, N1, sum1))  # Output: 4

coins2 = [2, 5, 3, 6]
N2 = 4
sum2 = 10
print(count(coins2, N2, sum2))  # Output: 5
