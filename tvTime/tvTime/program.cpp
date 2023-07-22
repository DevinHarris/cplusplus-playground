#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	const int NUM_COUNTRIES = 5;
	vector<string> ctryNames(NUM_COUNTRIES);
	vector<int> ctryMins(NUM_COUNTRIES);

	string userCountry;
	bool foundCountry = false;
	unsigned int i;

	// Fill vector contents

	ctryNames.at(0) = "China";
	ctryMins.at(0) = 155;

	ctryNames.at(1) = "Sweden";
	ctryMins.at(1) = 154;

	ctryNames.at(2) = "Russia";
	ctryMins.at(2) = 246;

	ctryNames.at(3) = "UK";
	ctryMins.at(3) = 216;

	ctryNames.at(4) = "USA";
	ctryMins.at(4) = 274;

	// Prompt user for country name

	cout << "Enter country name: ";
	cin >> userCountry;

	// Find country's index and average TV time

	foundCountry = false;

	for (i = 0; i < ctryNames.size() && (!foundCountry); ++i) {
		foundCountry = true;
		cout << "People in " << userCountry << " watch ";
		cout << ctryMins.at(i) << " mins of TV daily." << endl;
	}

	if (!foundCountry) {
		cout << "Country was not found; try again." << endl;
	}


	return 0;
}