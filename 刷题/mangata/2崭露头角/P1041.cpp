#include <iostream>
using namespace std;
#define N 10000
int a[N]; 
int pd[N]={0};
int n = 0;
void print()
{
    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}
void dfs(int x)
{
    if(x == n)//x表示的是当前已经放了几个数了，当n个的时候就可以输出了
    {
        print();
        return ;
    }
    for(int i = 1; i <= n; i++)
    {
        if(!pd[i])
        {
            a[x+1] = i;//i未被标记，即可使用
            pd[i]=1;//标记表示i已经放入
            dfs(x+1);//下一步
            pd[i]=0;//回溯
        }
    }
}
int main()
{
    cin >> n;
    dfs(0);
    cout << endl;
    return 0;
}