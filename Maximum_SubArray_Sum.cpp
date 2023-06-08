#include<iostream>
#include<stack>
using namespace std;

int main() {

	int n;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int maxi = arr[0];
	int sum = 0;
	for (int i = 0; i < n; i++) {

		sum += arr[i];
		maxi = max(sum, maxi);

		if (sum < 0) {
			sum = 0;
		}

	}

	cout << maxi << endl;




	return 0;
}