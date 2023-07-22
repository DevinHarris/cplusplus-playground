#include <iostream>
using namespace std;

int main() {

	int heartbeatPerMin;
	int userAgeYears;
	int userAgeDays;
	int userAgeMins;
	int totalHeartbeats = 72;

	cout << "Find out information about your heartbeat!";
	cout << endl;
	cout << "First we're gonna need some information";
	cout << endl;

	cout << "Okay let's get started! How old are you?";
	cin >> userAgeYears;

	userAgeDays = userAgeYears * 365; // Calculate days without leap years
	userAgeDays = userAgeDays + (userAgeYears / 4); // Add days for leap years

	cout << "You are " << userAgeDays << " days old." << endl;

	userAgeMins = userAgeDays * 24 * 60; // 24 hours/day, 60 mins/hours
	cout << "You are " << userAgeDays << " minutes old." << endl;

	totalHeartbeats = userAgeMins + totalHeartbeats;
	cout << "Your heart has beat " << totalHeartbeats << " times." << endl;


	return 0;
}