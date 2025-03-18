// Theme01_Code01.cpp

#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> v(n, 0);
	for (int i = 0; i < n; i += 1) {
		cin >> v[i];
	}
	
	int sum = 0, pro = 1;
	for (int i = 0; i < n; i += 1) {
		sum += v[i];
	}
	for (int i = 0; i < n; i += 1) {
		pro *= v[i];
	}
	cout << sum * pro << endl;
	return 0;
}
