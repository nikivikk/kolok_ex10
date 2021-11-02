#include <iostream>
#include <math.h>
int main() {
	int m;
	std::cin >> m;
	int s = 0;
	int x;
	std::cin >> x;
	for (int n = 1; n <= m; n++) {
		s += (pow(x, 2 * n - 1)/(2*n - 1) * sin(2 * n * x));
	}
	std::cout << s;
	return 0;
}