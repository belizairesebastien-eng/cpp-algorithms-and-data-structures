 C++ Algorithms & Data Structures

A collection of data sctructures and algorithm I have been working on in c++, My favorite langauge so far. 


* Algorithms
hash_map: Inside has_map there is a frequency counter, anagram checker, and first non-repeating character which I build using std::unordered_map.
my Anagram stores has key value pair and give you instint look up so it's perfect for these algorithms. My anagram count both string through a freqencycounter whcih counts each time a charavter appears.
then it compares the too map and if every character appears the same number of times in both strings, they're anagrams. For the first nonrepeating character I use the frequency counter to build the frequency map for the string.
I then made it loop through the string in order to find the fisrt non repeating one. if that character appears exacly once, I print it and return. if not I sdt::cout that we are not able to find it.
The requency works in two parts. it loops through every character in the string, if the character is already in the map it increments it's count by one. (c != ' ' && map.find(c)!= map.end()){
auto it = map.find(c);it->second +=1; if it's not in the map yet it insert it with a count of 1. The second part print the results unsing temp so it does no tdestroy the original one.

Sudoku_Validator:
my algorithm creates 3 arrays of 9 set each. One for row, one for collumns, and one for the 3*3 boxes. Each of the sets tracks numbers
that have already been seen. It loops through every cells on the board and map every cell to one of the 9 boxes using the formula int box = (r/3)*3+(c/3). insert() returns a pair where .second is false if the element already existed so if inserting into any of the three cells fails that number is a duplicate so it returns false. 

