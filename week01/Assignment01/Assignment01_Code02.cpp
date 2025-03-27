// Assignment01_Code02.cpp

#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		string val;
		cin >> val;

		stack<int> s;
		bool isValid = true;
		for (char x : val) {
			if (x == '(') s.push(1);
			else {
				if (s.empty()) {
					isValid = false;
					break;
				}
				s.pop();
			}
		}

		cout << (isValid && s.empty() ? "YES" : "NO") << '\n';
	}

	return 0;
}