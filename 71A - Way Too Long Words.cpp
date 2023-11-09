#include <iostream>
#include <iostream>
#include <cstdio>
#include <math.h>
#include <algorithm>
#include <cstring>
#include <string.h>

using namespace std;
 
int main() {

	string s;
 
	int n;
	cin >> n;
 
	while (n--) {
		cin >> s;
		if (s.length() > 10) {
			cout << s[0] << s.length() - 2 << s[s.length() - 1] << "\n";
		} else {
			cout << s << "\n";
		}
	}

	ios::sync_with_stdio(0);
	cin.tie(0);
	return 0;
}