/*
Programmer: Zach Nett
Class: CptS 122; Lab Section 5
Programming Assignment: PA6
File: BST.h
Description: This program uses binary search trees to look up morse code.
*/

#pragma once

#include "BSTNode.h"

class BST {
public:
    // Constructor should open and read file, construct and insert nodes, etc.
    // Thus declaration is below and implemented in BST.cpp.
    BST();
    // Default Destructor
	~BST() { destroyTree(root); }

	// getRoot(), accessor function. Returns data member root of BST object.
	BSTNode *getRoot(void);

	// setRoot(), mutator function. Sets data member root of BST object.
	void setRoot(BSTNode *newRoot);

	// insert(), front-end function, calls insertNode() with respect to current BST object.
	void insert(char character, string morse);

	// insertNode(), inserts node based on ASCII value of character inserting with respect to root.
	// If root does not exist, the inserted value becomes the root of the BST object.
	// NOTE: Code adapted from work done in Lab 8.
	void insertNode(BSTNode *node, char character, string morse);

	// print(), front-end function that calls inOrderTraversal() with respect to current BST.
	void print();

	// inOrderTraversal(), prints characters of tree recursively in-order by in-order traversal (left, process, right).
	void inOrderTraversal(BSTNode *node);

	// search(), front-end function that calls search() with respect to current BST.
	string search(char &target);

	// search(), searches BST for target character and returns morse code value for that target.
	// Precondition: Target character must either be a space or must be defined in MorseTable.txt.
	string search(BSTNode *n, char &target);

private:
    BSTNode *root;
	// destroyTree(), method to recursively delete tree, called from destructor
	// Code taken from work done in Lab 8.
	void destroyTree(BSTNode *node);
};