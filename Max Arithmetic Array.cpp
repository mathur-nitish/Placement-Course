#include<iostream>
using namespace std;

int main() {

	const int n = 7;
	//cin >> n;
	int ar[n] = {10,7,4,6,8,10,11};

	int ans = 2;
	int pd = ar[1] - ar[0];
	int j = 2;
	int curr = 2;

	while (j < n) {
		if (pd == ar[j] - ar[j - 1]) {
			curr++;
		}
		else {
			pd = ar[j] - ar[j - 1];
			curr = 2;
		}

		ans = max(ans, curr);

		j++;
	}

	cout << ans;
	






	return 0;
}