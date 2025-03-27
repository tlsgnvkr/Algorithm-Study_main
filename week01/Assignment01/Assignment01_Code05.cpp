// Assigment01_Code05.cpp

#include <iostream>
#include <vector>
#include <queue>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int k;
	cin >> k;

	vector<pair<int, int>> apple;
	for (int i = 0; i < k; i += 1) {
		int y, x;
		cin >> y >> x;
		apple.push_back(make_pair(y, x));
	}

	int l;
	cin >> l;

	queue<pair<int, char>> direction;
	for (int i = 0; i < l; i += 1) {
		int x;
		char c;
		cin >> x >> c;
		direction.push(make_pair(x, c));
	}

	deque<pair<int, int>> snake;
	snake.push_back(make_pair(1, 1));
	int d = 0;
	int time = 0;
	while (true) {
		int y = snake.back().first;
		int x = snake.back().second;
		time += 1;

		if (d == 0) x += 1;
		else if (d == 1) y -= 1;
		else if (d == 2) x -= 1;
		else if (d == 3) y += 1;

		if (x < 1 || x > n || y < 1 || y > n) break;

		snake.push_back(make_pair(y, x));
		bool check = false;
		for (int i = 0; i < snake.size() - 1; i += 1) {
			if (snake[i] == make_pair(y, x)) {
				check = true;
				break;
			}
		}
		if (check) break;
		
		check = false;
		for (int i = 0; i < apple.size(); i += 1) {
			if (snake.back() == apple[i]) {
				apple.erase(apple.begin() + i);
				check = true;
				break;
			}
		}
		if (!check) snake.pop_front();

		if (!direction.empty() && time == direction.front().first) {
			if (direction.front().second == 'L') d = (d + 1) % 4;
			else if (direction.front().second == 'D') d = (d + 3) % 4;
			direction.pop();
		}
	}

	cout << time << endl;
	return 0;
}