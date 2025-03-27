// Assignment01_Code04.cpp

#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	string ex;
	cin >> ex;

	stack<char> st;
	for (auto x : s) {
		st.push(x);

		if (st.size() >= ex.size()) {
			bool flag = true;
			stack<char> temp;
			for (int i = 0; i < int(ex.size()); i += 1) {
				if (st.top() != ex[ex.size() - 1 - i]) {
					flag = false;
					break;
				}
				else {
					temp.push(st.top());
					st.pop();
				}
			}
			if (!flag) {
				while (!temp.empty()) {
					st.push(temp.top());
					temp.pop();
				}
			}
		}
	}

	if (st.empty()) cout << "FRULA" << endl;
	else {
		string res;
		while (!st.empty()) {
			res.push_back(st.top());
			st.pop();
		}
		reverse(res.begin(), res.end());
		cout << res << endl;
	}
}