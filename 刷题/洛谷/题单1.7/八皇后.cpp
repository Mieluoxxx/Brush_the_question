#include <iostream>
using namespace std;
int a[100], b[100], c[100], d[100];
//   行       列    左上右下  右上左下
int total = 0;//解法总数
int n = 0;//棋盘尺寸
void print()
{
    if(total <= 2)
    {
        for(int k=1; k<=n;k++)
            cout << a[k] << " ";
        cout << endl;
    }
    total++;
}

void queen(int i)
{
    if(i > n)
    {
        print();
    }
    else
    {
        for(int j=1; j<=n; j++)
        {
            if((!b[j])&&(!c[i+j])&&(!d[i-j+n]))//如果没有皇后占领
            {
                a[i]= j;//表明第i排是第j个  
                b[j]=1;//宣布占领纵列
                c[i+j]=1;
                d[i-j+n]=1;
                //宣布占领两条对角线
                queen(i+1);
                b[j]=0;
                c[i+j]=0;
                d[i-j+n]=0;
                //(回到上一步)清除标记    
            }
        }
    }
}
int main()
{
    cin >> n;
    queen(1);//第一个皇后
    cout << total << endl;
    return 0;
}