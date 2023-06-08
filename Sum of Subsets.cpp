#include<iostream>
#include<stack>
using namespace std;

int main() {

	cout << boolalpha;

	int n;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int req_sum;
	cin >> req_sum;
	int sum = 0;


	stack<int> st;
	
	int j = 0;
	int i = 0;
	while (j < n && sum + arr[j] <= req_sum) {
		sum += arr[j];
		j++;
	}

	if (sum == req_sum) {
		cout << true;
	}

	else {
		while (j < n) {
			sum += arr[j];
			if (sum > req_sum) {
				sum -= arr[i];
				i++;
			}

			if (sum == req_sum) {
				cout << true;
				break;
			}

			j++;
		}
	}





	return 0;
}