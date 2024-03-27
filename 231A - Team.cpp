#include <iostream>
#include <iostream>
#include <cstdio>
#include <math.h>
#include <algorithm>
#include <cstring>
#include <string.h>
using namespace std;

int main() {
	int petya, vasya, tonya;
	int n;
	cin >> n;

	int count = 0;
	// nanti count++

	for (int i=1; i<=n; i++) {
		cin >> petya >> vasya >> tonya;\

		if (petya + vasya + tonya >= 2) {
			count++; 
		}
	}

	cout << count;

	return 0;
}
