// Theme03_Code01.cpp

#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<vector<bool>> avoid(n + 1, vector<bool>(n + 1, false));
	for (int i = 0; i < m; i += 1) {
		int a, b;
		cin >> a >> b;
		avoid[a][b] = true;
		avoid[b][a] = true;
	}

	int res = 0;
	for (int i = 1; i <= n; i += 1) {
		for (int j = i + 1; j <= n; j += 1) {
			for (int k = j + 1; k <= n; k += 1) {
				if (!avoid[i][j] && !avoid[j][k] && !avoid[k][i]) res += 1;
			}
		}
	}

	cout << res << endl;
    return 0;
}