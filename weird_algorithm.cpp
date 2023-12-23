#include <bits/stdc++.h>
using namespace std;
 
int main(int argc, char *argv[])
{
	long long inp;
	cin >> inp;
 
	if (inp == 1) {
		cout << inp << endl;
		return 0;
	}
 
	do {
		cout << inp << ' ';
		if (inp%2 == 0) inp /= 2;
		else inp = (inp*3)+1;
	} while (inp != 1);
 
	cout << inp << endl;
	return 0;
}
