#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, h, v;
	cin >> n >> h >> v;
	
	if (h <= (n / 2)) {
		h = n - h;
	}

	if (v <= (n / 2)) {
		v = n - v;
	}

	cout << h * v * 4;
	
	return 0;
}