#include <iostream>
#include <string>
#include <vector>
using namespace std;

//

class Book {
public:

	void SetAuthor(string authorName) {
		author = authorName;
	}

	string GetAuthor() const {
		return author;
	}

	void SetTitle(string newTitle) {
		bookTitle = newTitle;
	 }
	string GetTitle() const {
		return bookTitle;
	}

private:
	string bookTitle;
	string author;
};

class AudioBook : public Book {

public:
	void SetTrackLength(int newLength) {
		trackLength = newLength;
	}

	int GetTrackLength() const {
		return trackLength;
	}
private:
	int trackLength;
};

int main() {

	Book harryPotter;
	AudioBook sixPillarsofSelfEsteem;
	
	vector<AudioBook> audioBooks;

	harryPotter.SetAuthor("J.K. Rowling");
	harryPotter.SetTitle("Harry Potter and The Order of Phoenix");

	sixPillarsofSelfEsteem.SetTitle("Six Pillars of Self-Esteem");
	sixPillarsofSelfEsteem.SetAuthor("Nathaniel Branden");

	audioBooks.push_back(sixPillarsofSelfEsteem);

	cout << "You have " << audioBooks.size() << " audiobooks! " << endl;
	cout << "Here's a book: " << sixPillarsofSelfEsteem.GetTitle() << endl;

	return 0;
}