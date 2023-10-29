#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

#define pii pair<int,int>
#define vii vector<pii>
#define vi vector<int>
#define rep(i,a,b) for(int i = a;i<b;i++)


int main() {

	int n;
	cin >> n;

	vi a(n);
	
	rep(i, 0, n) {
		cin >> a[i];
	}

	// for maximize
	sort(a.begin(), a.end());
	vi b(n / 2);
	rep(i, n / 2, n) {
		b.insert(b.begin(),a[i]);
	}
	int max_diff = 0;
	rep(i, 0, n / 2) {
		max_diff += abs(a[i] - b[i]);
	}
	cout << "Max_diff : " << max_diff << endl;




	return 0;
}