#include <iostream>
using namespace std;
int main()
{
    int sum = 1;
    for(int n = 2021; n >= 1; n-=2)
    {
        sum = (sum * n) % 100000;
    }
    cout << sum << endl;
    return 0;
}