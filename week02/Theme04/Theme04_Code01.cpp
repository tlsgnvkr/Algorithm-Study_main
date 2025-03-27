#include <iostream>
using namespace std;

int sum(int n) {
	if (n == 1) return 1;
	if (n % 2 == 1) return sum(n - 1) + n;
	return 2 * sum(n / 2) + (n / 2) * (n / 2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout << sum(3) << endl; // 6
    cout << sum(10) << endl; // 55
}