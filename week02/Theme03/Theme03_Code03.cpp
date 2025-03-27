#include <iostream>
using namespace std;

int Sum(int n) {
	if (n == 1) return 1; // LINE 1
	return n + Sum(n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cout << Sum(3) << endl; // 6
    cout << Sum(10) << endl; // 55
    return 0;
}