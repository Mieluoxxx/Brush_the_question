#include <iostream>
using namespace std;
long long a = 1,b = 1, i = 0;
void func(int k, int n)
{
    if(k == 0 || k == n) return ;
    else{
        func(k-1,n-1);
        a *= n;
        b *= ++i;
    }
}
int main()
{
    int n,k;
    cin >> k >> n;
    func(k,n);
    long long c = a/b;
    cout << c << endl;
    return 0;
}