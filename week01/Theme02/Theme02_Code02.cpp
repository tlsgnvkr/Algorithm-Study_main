// Theme02_Code02.cpp

#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> q;

	q.push(0);
	q.push(1);
	q.push(2);

	cout << q.front() << " " << q.back() << endl; // 0 2
	
	q.push(3);
	q.push(4);
	q.pop();
	q.pop();

	cout << q.front() << " " << q.back() << endl; // 2 4
}
