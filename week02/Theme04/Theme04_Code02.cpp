#include <iostream>
using namespace std;

typedef long long int ll;

ll power(ll a, ll x) {
	if (x == 0) return 1;
	else if (x % 2) {
		ll temp = power(a, ((x - 1) / 2));
		return (temp * temp * a);
	}
	else {
		ll temp = power(a, x / 2);
		return temp * temp;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << power(5, 3) << endl; // 125
	cout << power(2, 27) << endl; // 134217728
}