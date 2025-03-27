// Theme04_Code03.cpp

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef long long int ll;

int recursion(ll idx) {
	if (idx == 0) return 0;

	if (idx % 2) return abs(recursion(idx / 2) - 1);
	else return recursion(idx / 2);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll k;
	cin >> k;

	cout << recursion(k - 1) << '\n';
	return 0;
}