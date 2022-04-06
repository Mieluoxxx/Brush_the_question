#include <iostream>
using namespace std;
int main()
{
    int d1=1,d2=1,d3;
    int n = 0;
    cin >> n;
    int i = 2;
    if(n <= 2)  cout << d1 << endl;
    else
    {
        while(i < n)
        {
            d3 = (d1+d2)%10007;
            d1 = d2;
            d2 = d3; 
            i++;
        }
        cout << d3 << endl;
    }
    return 0;
}