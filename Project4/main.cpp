#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "BST.h"
using namespace std;

//Function  :PrintHeader()
//Purpose   :prints the header
//Parameters:none
//Returns   :none
void PrintHeader() {
	cout << "Brendon King" << endl;
	cout << "CS 2420" << endl;
	cout << "Program 4\n" << endl;
}

int main() {
	char userInput = '?';
	PrintHeader();
	while (userInput != 'n') {
		//Init variables
		BST* b = new BST();
		string fileName;
		fstream newFile;
		string nextVal;

		//print file headings and ask for input
		
		cout << "\nEnter name of text file: ";
		cin >> fileName;
		newFile.open(fileName);

		//handle failure
		while (newFile.fail()) {
			cout << "File read failure.  Please try again: ";
			cin >> fileName;
			newFile.open(fileName);
		}
		while (newFile >> nextVal) {
			int tempVal = atoi(nextVal.c_str());
			b->root = b->insert(b->root, tempVal);
		}
		//Display tree contents
		b->display();

		cout << "\nRun again? Type \'n\' to quit:";
		cin >> userInput;
	}
	
	system("pause");
	return 0;
}