#include<iostream>
using namespace std;
int main()
{
	long long n,m;
	cin>>n;
	while(n--){
		cin>>m;
		if(m > 0 && ((m-1) & m) == 0) cout << "YES" << endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
