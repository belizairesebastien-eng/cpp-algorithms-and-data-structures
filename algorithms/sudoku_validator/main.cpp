#include <iostream>
#include <unordered_set>


bool isValidSudoku(std::vector<std::vector<char>>&board){
    std::unordered_set<char> rows[9];
    std::unordered_set<char> columns[9];
    std::unordered_set<char> boxes[9];
    for (int r = 0; r<9; r++){
        for (int c =0 ; c<9; c++){
            char ch = board[r][c];

            if (ch == '.'){
                continue;
            }

            int box =(r/3)*3+(c/3);
            
            if(!rows[r].insert(ch).second ||
            !columns[c].insert(ch).second ||
            !boxes[box].insert(ch).second
            ){
                return false;
            }
        }
    }
    return true;
}




int main(){
//valid
std::vector<std::vector<char>> grid = {
    {'5','3','.','.','.','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','.','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}
};
//not valid
std::vector<std::vector<char>> grid2 = {
    {'5','3','3','.','.','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','.','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}
};
  
std::cout << isValidSudoku(grid) << std::endl;
std::cout << isValidSudoku(grid2) << std::endl;

}