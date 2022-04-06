#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    double pi;
    pi = atan(1) * 4;
    int r = 0;
    cin >> r;
    double s = r * r * pi;
    printf("%.7f",s);
    cout << endl;
    return 0;
}