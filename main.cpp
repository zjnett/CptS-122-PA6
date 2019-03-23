/*
Programmer: Zach Nett
Class: CptS 122; Lab Section 5
Programming Assignment: PA6
File: main.cpp
Description: This program uses binary search trees to look up morse code.
*/

#include "PA6.h"
#include "BST.h"

using std::cout;
using std::endl;
using std::fstream;

int main(void) {
	BST tree;
	cout << "Tree Printed (in order):" << endl;
	tree.print();
	cout << endl;
	cout << "Opening Convert.txt..." << endl;
	fstream convertFile;
	convertFile.open("Convert.txt");
	if (convertFile.is_open()) {
		cout << "Convert.txt opened successfully!" << endl;
		while (!convertFile.eof()) {
			string line;
			getline(convertFile, line);
			for (int i = 0; i < line.length(); i++) {
				char target = toupper(line.at(i));
				cout << tree.search(target) << " ";
			}
			cout << endl;
		}
		convertFile.close();
	} else {
		cout << "ERROR! Convert.txt could not be opened." << endl;
	}
	return 0;
}