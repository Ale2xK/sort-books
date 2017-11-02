#ifndef BOOK_H
#define BOOK_k

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Review {
	std::string title;
	int rating;
};

bool operator<(const Review & r1, const Review & r2);
bool worseThan(const Review & r1, const Review & r2);
bool FillReview(Review & rr);
void ShowReview(const Review & rr);

#endif BOOK_H

