#include <math.h>
#include <iostream>
using namespace std;
int main() 
{
    int n, k;
    cin >> n;
    int m = sqrt(n);
    for(k = 2; k <= m; k++) 
    {
        if(n % k == 0)
        {
            int tmp = n / k;
            int q = 0;
            for(int i = 2; i <= sqrt(tmp); i++) {
                if(tmp % i==0) 
                {
                    q = 1;
                    break;
                }
            }
            if(!q) 
            {
                cout << tmp << endl;
                break;
            }
        }
    }
    return 0;
}
