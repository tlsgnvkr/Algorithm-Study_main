// Theme02_Code05.cpp

#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> s;

	s.push(0);
	s.push(1);
	s.push(2);

	cout << s.top() << endl; // 2
	
	s.push(3);
	s.push(4);

	cout << s.top() << endl; // 4
}
