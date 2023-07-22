#include <iostream>
#include <string>
using namespace std;

class Restaurant {
public: 
	void SetName(string restaurantName);
	void SetRating(int userRating);
	string GetName() const;
	int GetRating() const;
	void Print() const;

private:
	string name = "NoName";
	int rating = -1;
};

void Restaurant::SetName(string resaurantName) {
	name = resaurantName;
}

void Restaurant::SetRating(int userRating) {
	rating = userRating;
}

string Restaurant::GetName() const {
	return name;
}

int Restaurant::GetRating() const {
	return rating;
}

void Restaurant::Print() const {
	cout << name << " -- " << rating << endl;
}

int main() {

	Restaurant favLunchPlace;

	string userFavPlace;
	int userRating;

	cout << "Enter your favorite place to eat: ";
	cin >> userFavPlace;

	cout << "And now what would you rate it? ";
	cin >> userRating;

	favLunchPlace.SetName(userFavPlace);
	favLunchPlace.SetRating(userRating);

	favLunchPlace.Print();

	return 0;
}