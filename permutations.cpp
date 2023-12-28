#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	long long len;
	cin >> len;

	if (len > 1 && len < 4) {
		cout << "NO SOLUTION\n";
		return 0;
	}

	for (int i = 2; i <= len; ++i) {
        if (!(i%2)) {
            cout << i;
            cout << " ";
        }
	}
    
    for (int i = 1; i <= len; ++i) {
        if (i%2) {
            cout << i;
            cout << " ";
        }
	}
    
	cout << endl;
}
