#include <iostream>
using namespace std;

int main() {
	unsigned int A, B;
	for (;;) {
		cout << "\nPlease, enter the number: ";
		cin >> A;
		for (B = 1; B <= A; B++)
		{
			if (B * B % A == 0 && B * B * B % A != 0)
			{
				cout << B << " ";
			}
		}
	}
	return 0;
}