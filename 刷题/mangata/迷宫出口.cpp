#include <iostream>
#include <cstdio>
using namespace std;
int a[110][110];
int n,s1,s2,e1,e2;
//沿着右、下、左、上依次递归
int fx[5] = {0,0,1,0,-1};
int fy[5] = {0,1,0,-1,0};
bool f = false; //假设不能到终点
void dfs(int x, int y)
{
    a[x][y] = 1;//讲走过的点标记为1，防止死循环
    int tx,ty;//将要探索的点
    for(int i = 1; i <= 4; i++)
    {
        tx = x + fx[i];
        ty = y + fy[i];

        //判断新点是否有效(未访问且未出边界)
        if(tx>=1 && tx<=n && ty>=1 && ty<=n && a[tx][ty]==0)
        {
            if(tx==e1 && ty==e2)    f = true;
            dfs(tx,ty);
        }
    }
}
int main()
{
    cin >> n;
    int i,j;
    //读入迷宫
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    //读入起始点
    cin >> s1 >> s2 >> e1 >> e2;
    //如果起止点又不可大的情况不需要递归
    if(a[s1][s2]==1||a[e1][e2]==1)  cout << "NO" << endl;
    else{
        dfs(s1,s2);
        //找到终点
        if(f == true)   cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
    return 0;
}