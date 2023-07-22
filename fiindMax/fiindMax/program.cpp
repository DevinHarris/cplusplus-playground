#include <iostream>
using namespace std;

int main() {

	int currVal = 0;
	int max = 0;
	char userLetter = 'y';

	cout << "Enter a number:";


	while (userLetter == 'y') {

		cin >> currVal;

		if (currVal > max) {
			max = currVal;
		}

		cout << "To continue enter y: " << endl;
		cin >> userLetter;
	}


	cout << "The largest number you entered was: " << max << endl;
	cout << "Done." << endl;

	return 0;
}