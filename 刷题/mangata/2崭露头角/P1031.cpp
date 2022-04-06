#include <iostream>
using namespace std;
void pd(int i)
{
    if(i/1000 == i%10 && (i-(1000*(i/1000)))/100 == (i%100)/10)
    {
            cout << i << endl;     
    }
}

int main()
{
    for(int n = 1000; n <= 10000; n++)
        pd(n);
    return 0;
}