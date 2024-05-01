#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;

int main() {
	chrono::steady_clock sc;
	auto start = sc.now();
	srand(time(NULL));
	int r = rand() % 500 + 1;
	int u_number;
	int tries = 0;
	for (;;)
	{
		cout << "\nPlease, enter the number you think was guessed: ";
		cin >> u_number;
		if (u_number == 0) {
			break;
		}
		else if (u_number < r) {
			cout << "The guessed number is bigger than the number you've entered";
		}
		else if (u_number > r) {
			cout << "The guessed number is less than the number you've entered";
		}
		else {
			cout << "\nYou've won";
			break;
		}
		tries++;
	}
	auto end = sc.now();
	auto time_span = static_cast<chrono::duration<double>>(end - start);
	cout << "\nYou've wasted " << tries << " tries and " << time_span.count() << " seconds";
	return 0;
}