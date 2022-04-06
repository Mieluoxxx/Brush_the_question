#include <iostream>
using namespace std;
int main()
{
    double h,w;
    cin >> h >> w;
    double bmi = w/h/h;
    if(bmi >= 24)   cout << "high" << endl;
    else if(bmi >= 18.5) cout << "normal" << endl;
    else cout << "low" << endl;
    return 0;
}