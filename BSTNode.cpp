/*
Programmer: Zach Nett
Class: CptS 122; Lab Section 5
Programming Assignment: PA6
File: BSTNode.cpp
Description: This program uses binary search trees to look up morse code.
*/

#include "BSTNode.h"

// getCharacter(), accessor method that returns character in node.
char BSTNode::getCharacter(void) {
    return character;
}

// getMorse(), accessor method that returns morse in node.
string BSTNode::getMorse(void) {
    return morse;
}

// getLeft(), accessor method that returns left pointer.
BSTNode *BSTNode::getLeft(void) {
    return left;
}

// getRight(), accessor method that returns right pointer.
BSTNode *BSTNode::getRight(void) {
    return right;
}

// setCharacter(), mutator method that sets new character value.
void BSTNode::setCharacter(char newCharacter) {
    character = newCharacter;
}

// setMorse(), mutator method that sets new morse value.
void BSTNode::setMorse(string newMorse) {
    morse = newMorse;
}

// setLeft(), mutator method that sets new left pointer.
void BSTNode::setLeft(BSTNode *newLeft) {
    left = newLeft;
}

// setRight(), mutator method that sets new right pointer.
void BSTNode::setRight(BSTNode *newRight) {
    right = newRight;
}