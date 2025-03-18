// Theme01_Code02.cpp

#include <iostream>
#include <vector>
using namespace std;

int binSearch(vector<int> val, int target) {
	int low = -1, high = val.size();
	while (low + 1 < high) {
		int mid = (low + high) / 2;
		if (val[mid] < target) low = mid;
		else high = mid;
	}
	return high;
}

int main() {
	vector<int> arr = { 1, 3, 4, 6, 9, 12, 13, 15, 16, 18 };
	cout << binSearch(arr, 4) << endl; // 3
	return 0;
}
