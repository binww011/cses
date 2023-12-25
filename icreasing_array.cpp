#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	long long len, grt = 0, idx;
	cin >> len;
	int vls[len];

	for (int i = 0; i < len; ++i) {
		cin >> vls[i];
	}
    
    for (int i = 1; i < len; ++i) {
        if (vls[i] < vls[i-1]) {
            idx = abs(vls[i] - vls[i-1]);
            vls[i] += idx;
            grt += idx;
        }
    }
    
    cout << grt << endl;

	return 0;
}
