#include <iostream>
using namespace std;

int main() {
	int A, B;
	cout << "Please, enter the numbers: ";
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	for (int i = 2;; i++)
	{
		if (A > B)
		{
			if (i <= B/2 && B % i == 0 && A % i == 0) cout << i << " ";
			if (i > B / 2) break;
		}
		else if (B > A)
		{
			if (i <= A / 2 && B % i == 0 && A % i == 0) cout << i << " ";
			if (i > A / 2) break;
		}
	}
	return 0;
}