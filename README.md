**C++ Algorithms & Data Structures**<br>
A comprehensive collection of data structures and algorithms implemented in C++. This repository serves as a deep dive into memory management, STL optimization, and algorithmic efficiency.<br>

**Data Structures**<br>
Binary Search Tree (BST):<br>
A modular implementation of a BST focusing on efficient searching and ordered data retrieval.<br>
*Key Operations: Supports insert, search, remove, and height calculations.<br>
*Traversals: Includes In-Order, Pre-Order, and Post-Order recursive traversals.<br>
*Performance: Average case $O(\log n)$ for search and insertion.<br><br>

Doubly Linked List (DLL):<br>
A custom-built list where each node contains pointers to both the next and previous nodes, allowing for bi-directional traversal.<br>
Implementation: Features manual memory management (constructors/destructors) to prevent memory leaks.<br>
Functions: Includes push_front, push_back, and deleteNode logic.<br>
Advantage: Allows for $O(1)$ deletions given a pointer to a node, unlike a singly linked list.<br><br>

Stack:<br>
A LIFO (Last-In, First-Out) data structure implemented using a custom linked list or dynamic array.<br>
Operations: push(), pop(), top(), and isEmpty().<br>
Use Case: Ideal for tracking state, undo mechanisms, or function call management.<br><br>

---

**Algorithms**<br>
Hash Map Operations (unordered_map):<br>
Used std::unordered_map to solve common string manipulation and frequency problems with $O(1)$ average time complexity.<br><br>

Anagram Checker: Uses a frequency counter to map characters from two strings. If the frequency maps match, the strings are confirmed anagrams.<br>
First Non-Repeating Character: 1.  Builds a frequency map of the string. 2.  Iterates through the original string to find the first character with a frequency count of exactly 1.<br>
Frequency Counter: Loops through characters; if a character exists in the map, the iterator increments the value (it->second += 1). Otherwise, it inserts the character with an initial count of 1.<br><br>

Sudoku Validator:<br>
A high-efficiency validator that ensures a 9x9 Sudoku board is valid in a single pass ($O(81)$ complexity).<br>
Logic: Utilizes three arrays of nine std::set objects to track rows, columns, and 3x3 sub-grids.<br>
The Formula: Maps each cell $(r, c)$ to a box index using: int box = (r / 3) * 3 + (c / 3).<br>
Validation: Uses the .second return value of std::set::insert(). If the insertion returns false, a duplicate is detected, and the board is marked invalid.<br><br>

**Technical Preferences**<br><br>
Language: C++ (System architecture and manual memory management).<br>

Build System: Modular structure using CMake for professional project organization.<br>

Focus: Clean, readable code using standard naming conventions and modular design.<br>
