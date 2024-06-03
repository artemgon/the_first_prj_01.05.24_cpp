#include <iostream>
using namespace std;

int main() {
	float uah, eur, usd, jpy;
	int user_decision;
	for (;;)
	{
		cout << "Please, enter the option you want.\n" << "1 - certain currency to uah, 2 - uah to certain currency\n" << "or 0 - exit: ";
		cin >> user_decision;
		switch (user_decision)
		{
		case 1:
			cout << "How many euros do you want to convert? Please, enter: ";
			cin >> eur;
			cout << eur << " euro(s) is(are) " << eur * 43.91 << " hryvni\n";
			cout << "How many dollars do you want to convert? Please, enter: ";
			cin >> usd;
			cout << usd << " dollar(s) is(are) " << usd * 40.53 << " hryvni\n";
			cout << "How many yen do you want to convert? Please, enter: ";
			cin >> jpy;
			cout << jpy << " yen is(are) " << jpy * 0.26 << " hryvni\n";
			break;
		case 2:
			cout << "How many hryvni do you want to convert to euros? Please, enter: ";
			cin >> uah;
			cout << uah << " hryvnia(vni) is(are) " << uah * 0.023 << " euros\n";
			cout << "How many hryvni do you want to convert to dollars? Please, enter: ";
			cin >> uah;
			cout << uah << " hryvnia(vni) is(are) " << uah * 0.025 << " dollars\n";
			cout << "How many hryvni do you want to convert to yen? Please, enter: ";
			cin >> uah;
			cout << uah << " hryvnia(vni) is(are) " << uah * 3.88 << " yen\n";
			break;
		default:
			cout << "Invalid value\n";
			break;
		}
		if (user_decision == 0) {
			cout << "Bye!";
			break;
		}
	}
	return 0;
}