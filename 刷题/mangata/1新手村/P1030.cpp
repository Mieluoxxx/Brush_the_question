#include <iostream>
using namespace std;
int main()
{
    int T = 0;
    cin >> T;
    while (T--)
    {   
        int m,n,p;
        cin >> m >> n >> p;
        if(m+n <= p || m+p <= n || p+n <= m)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}