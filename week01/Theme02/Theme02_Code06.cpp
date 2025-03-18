// Theme02_Code06.cpp

#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> s;

	s.push(0);
	s.push(1);
	s.push(2);

	cout << s.size() << endl; // 3
	cout << s.empty() << endl; // 0
	
	s.push(3);
	s.push(4);
	s.pop();
	s.pop();

	cout << s.size() << endl; // 3
	cout << s.empty() << endl; // 0

	s.pop();
	s.pop();
	s.pop();
	
	cout << s.size() << endl; // 0
	cout << s.empty() << endl; // 1
}
