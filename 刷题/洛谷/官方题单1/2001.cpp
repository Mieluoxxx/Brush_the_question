#include <iostream>
#include <cstdio>
using namespace std;
int n, k;
int dfs(int num, int part, int now)//分别表示剩余待分的数，分的机会数，现在要选出来的数
{
    if(part == 1)   return 1;
    int sum = 0;
    for(int i = now; i <= num/part; i++)
        sum += dfs(num-i,part-1,i);
    return sum;
}

int main()
{
    cin >> n >> k;
    cout << dfs(n,k,1) << endl;
    return 0;
}