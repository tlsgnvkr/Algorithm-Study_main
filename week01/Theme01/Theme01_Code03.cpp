// Theme01_Code03.cpp

#include <iostream>
#include <vector>
using namespace std;

int place(vector<bool> v) {
	for (int i = 0; i < v.size(); i += 1) {
		if (v[i]) return i;
	}
	return -1;
}

int main() {
	vector<bool> arr = { 0, 0, 0, 1, 0, 1 };
	cout << place(arr) << endl;
	return 0;
}
