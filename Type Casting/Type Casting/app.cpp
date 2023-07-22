#include <iostream>
using namespace std;

int main() {
	int kidsInFamily1;
	int kidsInFamily2;
	int numFamilies;

	double avgKidsPerFamily;

	cout << "How many in the first family? ";
	cin >> kidsInFamily1;
	cout << "And the second? ";
	cin >> kidsInFamily2;

	numFamilies = 2;

	avgKidsPerFamily = static_cast<double>(kidsInFamily1 + kidsInFamily2) / static_cast<double>(numFamilies);

	cout << "Average number of kids per household " << avgKidsPerFamily << endl;

	return 0;
}