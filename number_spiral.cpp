#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
  long long int len, line, colu, dive, grt;
	cin >> len;
	
	while(len--) {
		cin >> line >> colu;
    grt = colu > line ? colu : line;
		dive = (grt-1)*(grt-1) + grt;
    
    if (line == colu) {
      cout << dive << endl;
      continue;
    }
        
    if ((dive - grt)%2 == 0) {
      if (line < colu) cout << dive + abs(line-colu) << endl;
      else cout << dive - abs(line-colu) << endl;
    } else {
      if (line < colu) cout << dive - abs(line-colu) << endl;
      else cout << dive + abs(line-colu) << endl;
    }
  }
	return 0;
}
