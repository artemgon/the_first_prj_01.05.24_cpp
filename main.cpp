#include <iostream>
using namespace std;

int main() {
	float us_dollar = 39.59;
	float euro = 42.26;
	float j_yen = 3.98;
	char u_choice;
	for (;;) {
		for (;;)
		{
			cout << "\nChoose the currency to see it's cost in UAH or type 0, if you want to end up: ";
			cout << "\n d - us dollar, e - euro, y - jap. yen\n";
			cin >> u_choice;
			switch (u_choice)
			{
			case 'd':
				cout << us_dollar;
				break;
			case 'e':
				cout << euro;
				break;
			case 'y':
				cout << j_yen;
				break;
			case '0':
				exit(0);
				break;
			default:
				cout << "You've inopportune sign. Please, try again.";
				break;
			}
		}
		break;
	}
	return 0;
}