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
    ~BST() {}
private:
    BSTNode *root;
};