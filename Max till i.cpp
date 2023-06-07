#include<iostream>
using namespace std;

int main() {

	int ar[5] = { 1,23,44,34,5 };
	int i;
	cin >> i;
	int maxi = ar[0];
	for (int a = 0; a <= i; a++) {
		maxi = max(maxi, ar[a]);
	}
	cout << endl;
	cout << maxi;



	return 0;
}