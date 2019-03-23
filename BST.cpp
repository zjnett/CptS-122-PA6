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
The tree should be built by the constructor for the BST. 
This means the constructor must open and read the file, create nodes for each character in the tree, 
insert the nodes into the tree (using an insert () function), and close the file. 
Note: the tree object could be declared as const, 
since all changes to it are being performed in the constructor. 
However, if you declare your object as a const, 
be sure to also declare your print () and search () functions as const. 
You should arrange the tree so that it is alphabetically ordered from left to right. 
Create a print ( ) function that uses recursion to traverse the tree in order (left most printed first). 
Also, build a search ( ) function that will return the Morse code string for each English character searched for. 
Do you need to return a found indicator from the search function? Should you use recursion? 
Finally, implement a destructor, which destroys the entire tree.
*/
BST::BST() {
    fstream morseTable;
    morseTable.open("MorseTable.txt");
    if (morseTable != nullptr) { // File was successfully opened
        
    }
}