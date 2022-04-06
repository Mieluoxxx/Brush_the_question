#include <iostream>
using namespace std;
int main()
{
    int x = 0, y = 0, i =0;
    while(x * y <= 2021)
    {
        for(x = 1; x <= 2021 ;x++)
        {
            for(y = 1; y <= 2021; y++)
            {
                if(x * y <= 2021)
                    i++;
            }
        }
    }
    cout << i << endl;
    return 0;
}