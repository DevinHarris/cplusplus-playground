#include <iostream>
#include "Reviews.h"
using namespace std;
5
// Get rating comment pairs, add each to list -1 rating ends.

void Reviews::InputReviews() {
	Review currReview;
	int currRating;
	string currComment;

	cin >> currRating;
	while (currRating >= 0) {
		getline(cin, currComment); // gets rest of line
		currReview.SetRatingAndComment
	}
}