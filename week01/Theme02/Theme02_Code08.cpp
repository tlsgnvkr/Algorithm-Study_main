// Theme02_Code08.cpp

#include <iostream>
#include <deque>
using namespace std;

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

	cout << d.front() << " " << d.back() << endl; // 4 3

	d.pop_front();
	d.pop_back();
	d.push_front(5);
	d.push_back(6);
	
	cout << d.front() << " " << d.back() << endl; // 5 6
}
