#include <iostream>
#include <vector>
#include <string>
using namespace std;

void PrintThis(string word) {

	cout << "This is your word: " << word << endl;
}

int addNums(int x, int y) {

	return x + y;
}

int main() {

	cout << addNums(1, 3) << endl;
	PrintThis("Well well well");
	return 0;
}