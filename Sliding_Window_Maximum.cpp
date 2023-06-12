#include<iostream>
#include<vector>
#include<set>
using namespace std;


int main() {

	int n, k;
	cin >> n >> k;
	vector<int> vc(n);

	for (auto& i : vc) {
		cin >> i;
	}

	multiset<int, greater<int>> s;
	vector<int> ans;

	for (int i = 0; i < k; i++) {
		s.insert(vc[i]);
	}
	ans.push_back(*s.begin());
	for(int i = k;i<n;i++){
		s.erase(s.lower_bound(vc[i - k]));
		s.insert(vc[i]);
		ans.push_back(*s.begin());

	}

	for (int i : ans) {
		cout << i << " ";
	}
	cout << endl;




	return 0;
}