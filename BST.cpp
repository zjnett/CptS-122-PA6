/*
Programmer: Zach Nett
Class: CptS 122; Lab Section 5
Programming Assignment: PA6
File: BST.cpp
Description: This program uses binary search trees to look up morse code.
*/

#include "PA6.h"
#include "BST.h"

using std::fstream;

// Default Constructor
/*
NOTE: The order of MorseTable.txt was chosen by taking progressive midpoints of chosen ASCII values.
These midpoints eventually converge down to include all required characters.
As such, the tree should be relatively balanced, if not perfectly.
Here is an image of the tree (drawn out): https://imgur.com/a/zedk3Gs
*/
BST::BST() {
    fstream morseTable;
    morseTable.open("MorseTable.txt");
    if (morseTable.is_open()) { // File was successfully opened
		char rootChar;
		morseTable >> rootChar;
		string rootMorse;
		morseTable >> rootMorse;
		BSTNode *root = new BSTNode(rootChar, rootMorse);
		insert(rootChar, rootMorse);
		setRoot(root);
		while (!morseTable.eof()) {
			morseTable >> rootChar;
			morseTable >> rootMorse;
			insert(rootChar, rootMorse);
		}
    }
	morseTable.close();
}

// getRoot(), accessor function. Returns data member root of BST object.
BSTNode *BST::getRoot(void) {
	return root;
}

// setRoot(), mutator function. Sets data member root of BST object.
void BST::setRoot(BSTNode *newRoot) {
	root = newRoot;
}

// insert(), front-end function, calls insertNode() with respect to current BST object.
void BST::insert(char character, string morse) {
	insertNode(this->root, character, morse);
}

// insertNode(), inserts node based on ASCII value of character inserting with respect to root.
// If root does not exist, the inserted value becomes the root of the BST object.
// NOTE: Code adapted from work done in Lab 8.
void BST::insertNode(BSTNode *node, char character, string morse) {
	if (node == nullptr) {
		BSTNode *newNode = new BSTNode(character, morse);
	} else {
		if (character < node->getCharacter()) { // go left
			if (node->getLeft() != nullptr) {
				insertNode(node->getLeft(), character, morse);
			}
			else {
				BSTNode *temp = new BSTNode(character, morse);
				node->setLeft(temp);
			}
		}
		else if (character > node->getCharacter()) { // go right
			if (node->getRight() != nullptr) {
				insertNode(node->getRight(), character, morse);
			}
			else {
				BSTNode *temp = new BSTNode(character, morse);
				node->setRight(temp);
			}
		}
		else { /*duplicate value*/ }
	}
}

// print(), front-end function that calls inOrderTraversal() with respect to current BST.
void BST::print() {
	inOrderTraversal(this->root);
}

// inOrderTraversal(), prints characters of tree recursively in-order by in-order traversal (left, process, right).
void BST::inOrderTraversal(BSTNode *node) {
	if (node != nullptr) {
		inOrderTraversal(node->getLeft());
		std::cout << node->getCharacter() << " ";
		inOrderTraversal(node->getRight());
	}
}

// search(), front-end function that calls search() with respect to current BST.
string BST::search(char &target) {
	string morse = search(this->root, target);
	return morse;
}

// search(), searches BST for target character and returns morse code value for that target.
// Precondition: Target character must either be a space or must be defined in MorseTable.txt.
string BST::search(BSTNode *n, char &target) {
	//Checks for spaces, which are not defined in BST by MorseTable.txt
	if (target == ' ') {
		return " ";
	}
	if (n->getCharacter() == target) {
		return n->getMorse();
	} else if (target < n->getCharacter()) {
		return search(n->getLeft(), target);
	} else if (target > n->getCharacter()) {
		return search(n->getRight(), target);
	}
}

// destroyTree(), method to recursively delete tree, called from destructor
// Code taken from work done in Lab 8.
void BST::destroyTree(BSTNode *node) {
	if (node != nullptr) {
		destroyTree(node->getLeft());
		destroyTree(node->getRight());
		delete node;
	}
}