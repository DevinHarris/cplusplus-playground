#include <iostream>
#include <string>
using namespace std;

class Restaurant {
public: 
	Restaurant(); // defining constructor function
	void SetName(string restaurantName);
	void SetRating(int userRating);
	void Print();
	
private:
	string name;
	int rating;
};

Restaurant::Restaurant() { // Default constructor
	name = "NoName"; // Default name: NoName indicates name
		rating = -1; // Default rating: -1 indicates rating
}

void Restaurant::SetName(string restaurantName) {
	name = restaurantName;
}

void Restaurant::SetRating(int userRating) {
	rating = userRating;
}

void Restaurant::Print() {
	cout << name << " -- " << rating << endl;
}

int main() {

	Restaurant favLunchPlace; // automatically calls the default

	favLunchPlace.Print();
	favLunchPlace.SetName("Central Deli");
	favLunchPlace.SetRating(4);
	favLunchPlace.Print();

	return 0;
}