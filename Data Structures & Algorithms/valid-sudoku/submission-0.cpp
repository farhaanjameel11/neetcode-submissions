class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;

        for(int r=0;r < 9 ;r++){
            for(int c =0;c<9;c++){
                if(board[r][c] == '.'){ continue;}

                string row = "row" + to_string(r) + board[r][c];
                string column = "column" + to_string(c) +board[r][c];
            string box = "box" + to_string((r /3) *3 + (c/3)) +board[r][c];
            
            if(seen.count(row) || seen.count(column) || seen.count(box)){
                return false;
            }
            seen.insert(row);
            seen.insert(column);
            seen.insert(box);
            }
        }
        return true;
    }
};
