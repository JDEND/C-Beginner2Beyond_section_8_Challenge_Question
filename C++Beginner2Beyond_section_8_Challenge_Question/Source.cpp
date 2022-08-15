#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool change(int cents);

int main() {

	int temp;

	cout << "Enter the number of cents: ";
	cin >> temp;
	cout << endl;

	change(temp);


	return 0;
}

bool change(int cents) {
	int dollars = 0, quarters = 0, dimes = 0, nickles = 0, pennies = 0;



	if (cents == 0)
		return false;
	else {
		dollars = cents / 100;
		cents %= 100;

		quarters = cents / 25;
		cents %= 25;

		dimes = cents / 10;
		cents %= 10;

		nickles = cents / 5;
		cents %= 5;

		pennies = cents / 1;
		cents %= 1;

	}

	cout << "Change should be given back as\nDollars: " << dollars << "\nQuarters: " << quarters << "\nDimes: " << dimes << "\nNickles: " << nickles << "\nPennies: " << pennies << endl;

	return true;
}