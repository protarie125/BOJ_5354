#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		int n;
		cin >> n;

		if (1 == n) {
			cout << "#\n\n";
			continue;
		}

		for (int i = 0; i < n; ++i) {
			cout << "#";
		}
		cout << '\n';

		for (int i = 1; i < n - 1; ++i) {
			cout << "#";
			for (int j = 1; j < n - 1; ++j) {
				cout << "J";
			}
			cout << "#\n";
		}

		for (int i = 0; i < n; ++i) {
			cout << "#";
		}
		cout << '\n';

		cout << '\n';
	}

	return 0;
}