#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int c, n;
    cin >> c >> n;
    int w[n], v[n];
    int dp[110][10000];
    int i, j = 0;
    for(i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i];
    }
    for(i = 1; i <= n; i++)
    {
        //讨论在i件物品下，背包容量分别为1～c最大值
        for(j = 1; j <= c; j++)//j代表背包容量
        {
            if(w[i] <= j)
            {
                dp[i][j] = max(dp[i-1][j],v[i]+dp[i-1][j-w[i]]);
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[n][c] << endl;
    return 0;
}