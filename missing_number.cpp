#include <bits/stdc++.h>
using namespace std;

int main(int argc, char*argv[])
{
	int len, res = 0, tmp, sum = 0;
	cin >> len;

	for (int i = 0; i < len-1; ++i)
	{
		cin >> tmp;
		sum += tmp;
	}

	for (int i = 1; i <= len; ++i) {
		res += i;
	}

	cout << res-sum << endl;
	return 0;
}
