#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)

bool compare(pii p1, pii p2) {

	double v1 = (double) p1.first / p1.second;
	double v2 = (double)p2.first / p2.second;

	return v1 > v2;

}



int main() {

	// get the number of items
	int n;
	cin >> n;

	vii a(n);

	rep(i, 0, n) {
		cin >> a[i].first >> a[i].second;
	}

	// sorting the items
	sort(a.begin(), a.end(), compare);

	int ans = 0;
	// weight of knapsack
	int w;
	cin >> w;


	rep(i, 0, n) {

		if (w >= a[i].second) {
			ans += a[i].first;
			w -= a[i].second;
			continue;
		}

		double vw = (double) a[i].first / a[i].second;
		ans += w * vw;
		w = 0;
		break;

	}


	cout << ans << endl;



	return 0;
}