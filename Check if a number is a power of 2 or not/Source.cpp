#include<iostream>
using namespace std;

bool powerOfTwo(int n) {
	return (n && !(n & n - 1));
}

int main() {
	int n;
	cin >> n;
	cout << boolalpha << powerOfTwo(n);
	return 0;
}