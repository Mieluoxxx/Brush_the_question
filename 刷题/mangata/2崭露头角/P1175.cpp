#include <iostream>
using namespace std;
int main()
{
	long long n,k;
	cin >> n;
	long long sum = 0;
	for(int i = 1;i <= n; ++i) 
    {
		cin >> k;
		if(k < 0)	sum += k * i;//负数取从高位置取，不影响低位置
        else	sum += k;//正数在1处取
	}
	cout << sum << endl;
	return 0;
} 
