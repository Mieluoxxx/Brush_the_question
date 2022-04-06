#include <iostream>
using namespace std;
int T,x1,x2,y1,y2;
int main() {
    cin >> T;
    while(T--)
    {
        cin >> x1 >> x2 >> y1 >> y2;
        int tmp1=y2%x1, num1=y2/x1;
        int tmp2=y1%x2, num2=y1/x2;
        if(tmp1) num1++;
        if(tmp2) num2++;
        if(num2<=num1)  cout << "YES" << endl;
        else    cout << "NO" << endl;

    }
    return 0;
}

