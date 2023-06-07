#include<iostream>
using namespace std;

int condition(int* ar, int n) {

	if (n == 1) {
		return 1;
	}


	int ans = 0;
	int maxi = ar[0];
	for (int i = 0; i < n; i++) {

		if (ar[i] > maxi && ar[i] > ar[i + 1]) {
			ans++;
		}
		maxi = max(maxi, ar[i]);
	}

	return ans;

}



int main() {

	int n;
	cin >> n;

	// dynamically allocating resources for an array -> ar
	int* ar = new int[n];

	// taking inputs
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}


	cout << condition(ar, n);



	return 0;
}