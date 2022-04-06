#include <iostream>
#include <cmath>
using namespace std;
int isprime(int n)
{
    int m = sqrt(n);
    for(int i = 2; i <= m; i++)
    {
        if(n % i == 0)  return 0;
    }
    return 1;
}
int main()
{
    int n = 0;
    cin >> n;
    int m = sqrt(n);
    int i = 0;
    for(i = 2; i <= m; i++)
    {
        if(n % i == 0 && isprime(n/i))
        {
            cout << n/i << endl;
            break;
        }
    }
    return 0;
}