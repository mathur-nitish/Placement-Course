#include<iostream>
#include<map>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;


int main() {

	int n;
	cin >> n;


	vector<int> a(n);

	for (int i=0; i < n;i++) {
		cin >> a[i];
	}


	priority_queue<int, vector<int>, greater<int>> minheap;

	for (int i = 0; i < n; i++) {
		minheap.push(a[i]);
	}

	int ans = 0;

	while (minheap.size() > 1) {

		int e1, e2;
		e1 = minheap.top();
		minheap.pop();
		e2 = minheap.top();
		minheap.pop();

		ans += e1 + e2;
		minheap.push(e1 + e2);

	}

	cout << "Answer : ";
	cout << ans << endl;

	return 0;



}