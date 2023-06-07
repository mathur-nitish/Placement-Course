#include<iostream>
using namespace std;

void condition(int* ar, int n) {

	int* new_ar = new int[n];

	int max_occur = 0;
	int occur = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			if (ar[i] == ar[j]) {
				occur++;
			}
		}
		new_ar[i] = occur;
	}

	for (int i = 0; i < n; i++) {
		if (new_ar[i] != NULL) {
			cout << i+1;
			return;
		}
	}



}


int main() {

	int n;
	cin >> n;
	int* ar = new int[n];


	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}

	condition(ar, n);
	



	return 0;
}