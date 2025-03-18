// Theme02_Code01.cpp

#include <iostream>
#include <queue>
using namespace std;

ostream& operator <<(ostream& os, queue<int> q) {
	while (!q.empty()) {
		os << q.front() << " ";
		q.pop();
	}
	return os;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> q;

	q.push(0);
	q.push(1);
	q.push(2);

	cout << q << endl; // 0 1 2
	
	q.push(3);
	q.push(4);
	q.pop();
	q.pop();
	q.pop();

	cout << q << endl; // 2 3 4
}
