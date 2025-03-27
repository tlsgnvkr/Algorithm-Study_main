// Theme03_Code04

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;

void recursion(vector<int> res) {
	if (res.size() == m) {
		for (auto x : res) cout << x << " ";
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++) {
		vector<int> temp = res;
		if (find(temp.begin(), temp.end(), i) == temp.end()) {
			temp.push_back(i);
			recursion(temp);
		}
		else continue;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	vector<int> temp;
	recursion(temp);

	return 0;
}