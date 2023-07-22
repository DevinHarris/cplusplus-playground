#pragma once
#ifndef REVIEW_H
#define REVIEW_H

#include <vector>
#include "Review.h"

class Reviews {
public:
	void InputReviews();
	void PrintCommentsForRating(int currRating) const;
	int GetAverageRating() const;

private:
	std::vector<Review> reviewList;
};

#endif