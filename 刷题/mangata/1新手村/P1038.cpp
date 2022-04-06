#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int t = n;
    int sum = 0;
    while(n > 0)
    {
        sum += (n % 10) * (n % 10) * (n % 10);
        n /= 10;
    }
    if(sum == t)    cout << "TRUE" << endl;
    else cout << "FALSE" << endl;
    return 0;
}