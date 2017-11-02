//sort books
#include "Header.h"

int main()
{
	std::vector<Review> books;
	Review temp;
	while (FillReview(temp))
		books.push_back(temp);
	if (books.size() > 0)
	{
		std::cout << "Thank you. You entered the following "
			<< books.size() << " ratings:\n"
			<< "Rating\tBook\n";
		for_each(books.begin(), books.end(), ShowReview);

		sort(books.begin(), books.end());
		std::cout << "Sorted by title:\nRating\tBook\n";
		for_each(books.begin(), books.end(), ShowReview);

		sort(books.begin(), books.end(), worseThan);
		std::cout << "Sorted by rating:\nRating\tBook\n";
		for_each(books.begin(), books.end(), ShowReview);

		random_shuffle(books.begin(), books.end());
		std::cout << "After shuffling:\nRating\tBook\n";
		for_each(books.begin(), books.end(), ShowReview);
	}
	else
		std::cout << "No entries. ";
	std::cout << "Bye.\n";
	return 0;
}

