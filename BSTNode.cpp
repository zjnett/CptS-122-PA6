/*
Programmer: Zach Nett
Class: CptS 122; Lab Section 5
Programming Assignment: PA6
File: BSTNode.cpp
Description: This program uses binary search trees to look up morse code.
*/

#include "BSTNode.h"

char BSTNode::getCharacter(void) {
    return character;
}

string BSTNode::getMorse(void) {
    return morse;
}

BSTNode *BSTNode::getLeft(void) {
    return left;
}

BSTNode *BSTNode::getRight(void) {
    return right;
}

void BSTNode::setCharacter(char newCharacter) {
    character = newCharacter;
}

void BSTNode::setMorse(string newMorse) {
    morse = newMorse;
}

void BSTNode::setLeft(BSTNode *newLeft) {
    left = newLeft;
}

void BSTNode::setRight(BSTNode *newRight) {
    right = newRight;
}