#include <iostream>
using namespace std;
int main()
{
    int T = 0;
    cin >> T;
    while(T--)
    {
        int n =0;
        cin >> n;
        if(n<60)    cout << "0.0" << endl;
        else
        {
            double d = 1.0 * (n-60)/10+1;
            printf("%.1f", d);
            printf("\n");

        }
    }
    return 0;
}