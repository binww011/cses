#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	long long grt = 0, cnt = 0;
	string dnseq;
	cin >> dnseq;

	for (int i = 0; i < dnseq.size(); ++i) {
		++cnt;
		if (dnseq[i] == dnseq[i+1]) continue;
		else {
			if (cnt > grt) grt = cnt;
			cnt = 0;
		}
	}

	cout << grt << endl;
	return 0;
}
