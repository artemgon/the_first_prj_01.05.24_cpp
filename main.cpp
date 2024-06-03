#include <iostream>
using namespace std;

int main() {
	int quantity = 0;
	for (int i = 100; i <= 999; i++)
	{
		if (i % 10 == i / 10 % 10 || i % 10 == i / 100 || i / 10 % 10 == i / 100)
		{
			quantity++;
		}
		else {
			continue;
		}
	}
	cout << "The result is " << quantity;
	return 0;
}