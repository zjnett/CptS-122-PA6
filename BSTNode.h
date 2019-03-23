/*
Programmer: Zach Nett
Class: CptS 122; Lab Section 5
Programming Assignment: PA6
File: BSTNode.h
Description: This program uses binary search trees to look up morse code.
*/

#pragma once

#include "PA6.h"

using std::string;

class BSTNode {
public:
    // Default Constructor
    BSTNode() : character('\0'), morse(""), left(nullptr), right(nullptr) {}
    // Default Value Constructor (null pointers)
    BSTNode(char _character, string _morse) : character(_character), morse(_morse), left(nullptr), right(nullptr) {}
    // Default Value Constructor (all explicit parameters)
    BSTNode(char _character, string _morse, BSTNode *_left, BSTNode *_right) : character(_character), morse(_morse), left(_left), right(_right) {}
    // Default Destructor
    ~BSTNode() {}

	// getCharacter(), accessor method that returns character in node.
    char getCharacter(void);

	// getMorse(), accessor method that returns morse in node.
    string getMorse(void);

	// getLeft(), accessor method that returns left pointer.
    BSTNode *getLeft(void);

	// getRight(), accessor method that returns right pointer.
    BSTNode *getRight(void);

	// setCharacter(), mutator method that sets new character value.
    void setCharacter(char newCharacter);

	// setMorse(), mutator method that sets new morse value.
    void setMorse(string newMorse);

	// setLeft(), mutator method that sets new left pointer.
    void setLeft(BSTNode *newLeft);

	// setRight(), mutator method that sets new right pointer.
    void setRight(BSTNode *newRight);
    
private:
    char character;
    string morse;
    BSTNode *left;
    BSTNode *right;
};