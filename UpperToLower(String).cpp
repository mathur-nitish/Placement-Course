#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {

	string s = "abcdefghijkl";

	// the difference between the u_case and l_case character is 32
	// approach is to iterate over the string &
	// sub -> l_case to u_case
	// add -> u_case to l_case


	for (int i = 0; i < s.length(); i++) {
		s[i] -= 32;
	}
	cout << "Lower case to Upper case : ";
	cout << s << endl;


	for (int i = 0; i < s.length(); i++) {
		s[i] += 32;
	}
	cout << "Upper case to Lower case : ";
	cout << s << endl;


	for (int i = 0; i < s.length(); i++) {
		s[i] -= '32';
	}
	cout << "From string characters to numeric character : ";
	cout << s << endl;



	return 0;
}