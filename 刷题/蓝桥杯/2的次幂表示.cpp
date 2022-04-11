#include <iostream>
using namespace std;
void func(int n)
{
	int i = 0;
	int arr[100] = { 0 };
	while (n)//当n取模完后，n也变成0
	{
		arr[i++] = n % 2;
		n /= 2;
	}
	int k = 0;
	int flag = 1;
	for (k = i - 1; k >= 0; k--){//因为n的二进制储存进数组时，是从最后一位开始储存
		if (arr[k])//判断不为0的元素
			flag = k;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		if (arr[j] == 1)
		{
			if (j > 2)//当n大于二时，在2^j中，要对j进行转化
			{
				printf("2(");
				func(j);
				printf(")");//对其次幂转化后，要封好‘)’
			}
			else if (j == 1)//当j==1时，其所表示的是2^1,即2
			{
				printf("2");
			}
			else
			{
				printf("2(%d)", j);
			}
			if (flag != j)//如果flag!=j，就说明在上面判断中因arr[j]==0，没有进入if语句
			{             //而arr[j]==0,就说明此时要打印下一位数，而两位数之间要打印'+'
				printf("+");
			}
		}
	}
}

int main()
{
	int n = 0;
	cin >> n;
	func(n);
    cout << endl;
	return 0;
}
