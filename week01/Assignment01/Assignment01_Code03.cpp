// Assignment01_Code03.cpp

#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(n + 1);
	for (int i = 1; i <= n; i += 1) cin >> v[i];

	deque<int> res;
	for (int i = 1; i <= n; i++) {
		int j = n - i + 1;
		if (v[j] == 1) res.push_front(i);
		else if (v[j] == 2) {
			int temp = res.front();
			res.pop_front();
			res.push_front(i);
			res.push_front(temp);
		}
		else if (v[j] == 3) res.push_back(i);
	}

	for (auto x : res) cout << x << " ";
	cout << endl;
	return 0;
}