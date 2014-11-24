#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void helper(string s, int start, int target) {
	for (int i = start; i <= sqrt(target); ++i) {
		if (target % i == 0) {
			// for 12, here we will out put 2*6
			cout << s << i << "*" << target / i << endl;
			// and 6 will be further handled.
			helper(s + to_string(i) + "*", i, target/i);
		}
	}
}

void printfactor(int n) {
	if (n <= 0) return;
	cout << "1*" << to_string(n) << endl;
	helper("", 2, n);
}

int main() {
	int i;
	do {
		cin >> i;
		printfactor(i);
		cout << endl;
	} while (i >= 0);

	return EXIT_SUCCESS;
}