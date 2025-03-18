// Theme02_Code07.cpp

#include <iostream>
#include <deque>
using namespace std;

ostream& operator <<(ostream& os, deque<int> d) {
	while (!d.empty()) {
		os << d.front() << " ";
		d.pop_front();
	}
	return os;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	deque<int> d;

	d.push_front(0);
	d.push_front(1);
	d.push_back(2);
	d.push_back(3);
	d.push_front(4);

	cout << d << endl; // 4 1 0 2 3

	d.pop_front();
	d.pop_back();
	d.push_front(5);
	d.push_back(6);
	
	cout << d << endl; // 5 1 0 2 6
}
