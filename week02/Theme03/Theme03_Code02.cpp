#include <iostream>
using namespace std;

int Sum(int n) {
	int res = 0;
	for (int i = 1; i <= n; i += 1) {
		res += i;
	}
	return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cout << Sum(3) << endl; // 6
    cout << Sum(10) << endl; // 55
    return 0;
}