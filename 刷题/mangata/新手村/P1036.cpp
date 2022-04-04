#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    if(n >= 90) cout << "Great" << endl;
    else if(n >= 70) cout << "Good" << endl;
    else if(n >= 60) cout << "Average" << endl;
    else cout << "Poor" << endl;
    return 0;
}