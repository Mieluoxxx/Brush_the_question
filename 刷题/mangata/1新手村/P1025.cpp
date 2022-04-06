#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int i = 1;
    while(i<=n)
    {
        if(i%2) cout << "签到" << endl;
        else cout << "QAQ" << endl;
        i++;
    }
    return 0;
}