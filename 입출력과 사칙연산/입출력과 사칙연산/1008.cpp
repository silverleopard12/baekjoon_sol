#include <iostream>
using namespace std;
int main() {
	float a, b;
	cin >> a >> b;
	cout.fixed;
	cout.precision(18);
	cout << a / (double)b << endl;
	return 0;
}