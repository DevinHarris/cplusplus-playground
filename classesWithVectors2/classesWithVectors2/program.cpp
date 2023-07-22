#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Review {
public:
	void SetRatingAndComment(int revRating, string revComment) {
		rating = revRating;
		comment = revComment;
	}

	int GetRating() const { return rating; }
	string GetComment() const { return comment; }

private:
	int rating;
	string comment;
};

// END Review class

class Reviews {
public:
	void InputReviews();
	void PrintCommentsForRatings(int currRating) const;
	int GetAverageRating() const;

private:
	vector<Review> reviewList;
};

// Get rating comment pairs, add each to list. -1 rating ends.

void Reviews::InputReviews() {
	Review currReview;
	int currRating;
	string currComment;

	cin >> currRating;

	while (currRating >= 0) {
		getline(cin, currComment); // gets rest of line
		currReview.SetRatingAndComment(currRating, currComment);
		reviewList.push_back(currReview);
		cin >> currRating;
	}
}

// Print all comments for reviews having the given rating

void Reviews::PrintCommentsForRatings(int currRating) const {
	Review currReview;
	unsigned int i;

	for (i = 0; i < reviewList.size(); ++i) {
		currReview = reviewList.at(i);

		if (currRating == currReview.GetRating()) {
			cout << currReview.GetComment() << endl;
		}
	}
}

int Reviews::GetAverageRating() const {
	int ratingsSum;
	unsigned int i;

	ratingsSum = 0;

	for (i = 0; i < reviewList.size(); ++i) {
		ratingsSum += reviewList.at(i).GetRating();
	}

	return (ratingsSum / reviewList.size());
}

// END Reviews class

int main() {

	Reviews allReviews;

	string currName;
	int currRating;

	cout << "Type rating and comments. To end: -1" << endl;
	allReviews.InputReviews();

	cout << endl << "Average rating: ";
	cout << allReviews.GetAverageRating() << endl;

	// Output all comments for given rating

	cout << endl << "Type rating. To end: -1" << endl;
	cin >> currRating;

	while (currRating != -1) {
		allReviews.PrintCommentsForRatings(currRating);
		cin >> currRating;
	}

	return 0;
}