// Theme02_Code03.cpp

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

	cout << q.size() << endl; // 3
	cout << q.empty() << endl; // 0
	
	q.push(3);
	q.push(4);
	q.pop();
	q.pop();

	cout << q.size() << endl; // 3
	cout << q.empty() << endl; // 0
	
	q.pop();
	q.pop();
	q.pop();
	
	cout << q.size() << endl; // 0
	cout << q.empty() << endl; // 1
}