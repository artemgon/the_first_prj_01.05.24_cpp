#include <iostream>
using namespace std;

int main() {
	int A, sum = 0; 
	cout << "Please, enter a number: ";
	cin >> A;
	int B = A;
	for (sum = 0; B > 0; sum += B % 10, B /= 10);
	if (sum * sum * sum == A * A)
	{
		cout << "Yes";
	}
	else 
	{
		cout << "No";
	}
	return 0;
}