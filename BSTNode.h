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

    char getCharacter(void);
    string getMorse(void);
    BSTNode *getLeft(void);
    BSTNode *getRight(void);

    void setCharacter(char newCharacter);
    void setMorse(string newMorse);
    void setLeft(BSTNode *newLeft);
    void setRight(BSTNode *newRight);
    
private:
    char character;
    string morse;
    BSTNode *left;
    BSTNode *right;
};