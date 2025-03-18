// Theme02_Code04.cpp

#include <iostream>
#include <stack>
using namespace std;

ostream& operator <<(ostream& os, stack<int> s) {
	while (!s.empty()) {
		os << s.top() << " ";
		s.pop();
	}
	return os;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> s;

	s.push(0);
	s.push(1);
	s.push(2);

	cout << s << endl; // 2 1 0
	
	s.push(3);
	s.push(4);
	s.pop();
	s.pop();

	cout << s << endl; // 2 1 0
}
