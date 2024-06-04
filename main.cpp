#include <iostream>
using namespace std;

int main() {
	int number, result_number = 0, factor = 1;
	cout << "Enter a number: ";
	cin >> number;
	for (; number; number /= 10) {
		if (number % 10 != 3 && number % 10 != 6) {
			result_number += number % 10 * factor;
			factor *= 10;
		}
	} 
	cout << result_number;
	return 0;
}