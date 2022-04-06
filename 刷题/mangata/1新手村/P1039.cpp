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
    int T = 0;
    cin >> T;
    while(T--)
    {
        int n = 0;
        cin >> n;
        if(isprime(n))  cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}