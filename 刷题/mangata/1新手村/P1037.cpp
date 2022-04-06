#include <iostream>
using namespace std;
int f[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};//0-16
char d[11]={'1','0','X','9','8','7','6','5','4','3','2'};
int main()
{
    int n = 0;
    cin >> n;   
    while(n--)
    {
        char s[18];
        int i = 0;
        for(i = 0; i < 18; i++)
            cin >> s[i];//0-17
        int sum = 0;
        for(i = 0; i < 17; i++)
        {
            if(s[i] == 'X')   sum += (f[i]*10)%11;
            else sum += ((s[i]-'0')*f[i])%11;
        }
        sum %= 11;
        if(d[sum] == s[17]) cout << "True" << endl;
        else cout << "False" << endl;
    }
    return 0;
}