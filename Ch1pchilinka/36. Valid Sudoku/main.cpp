#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
  bool isLineValid(std::vector<std::vector<char>>& board, int i) {
    std::vector<bool> digits(9);
    for (int k = 0; k < 9; ++k) {
      digits[k] = false;
    }
    bool ans_l = true;
    for (int j = 0; j < 9; ++j) {
      if (board[i][j] >= '1' && board[i][j] <= '9') {
        if (digits[board[i][j] - '1']) {
          ans_l = false;
        } else {
          digits[board[i][j] - '1'] = true;
        }
      }
    }
    return ans_l;
  }
  bool isColumnValid(std::vector<std::vector<char>>& board, int j) {
    std::vector<bool> digits(9);
    for (int k = 0; k < 9; ++k) {
      digits[k] = false;
    }
    bool ans_c = true;
    for (int i = 0; i < 9; ++i) {
      if (board[i][j] >= '1' && board[i][j] <= '9') {
        if (digits[board[i][j] - '1']) {
          ans_c = false;
        } else {
          digits[board[i][j] - '1'] = true;
        }
      }
    }
    return ans_c;
  }
  bool isSquareValid(std::vector<std::vector<char>>& board, int i, int j) {
    std::vector<bool> digits(9);
    for (int k = 0; k < 9; ++k) {
      digits[k] = false;
    }
    bool ans_s = true;
    for (int k = i; k < i + 3; ++k) {
      for (int l = j; l < j + 3; ++l) {
        if (board[k][l] >= '1' && board[k][l] <= '9') {
          if (digits[board[k][l] - '1']) {
            ans_s = false;
          } else {
            digits[board[k][l] - '1'] = true;
          }
        }
      }
    }
    return ans_s;
  }
  bool isValidSudoku(std::vector<std::vector<char>>& board) {
       bool ans = true;
       for (int i = 0; i < 9; ++i) {
         ans = ans && isColumnValid(board, i);
         ans = ans && isLineValid(board, i);
       }
       for (int i = 0; i < 9; i += 3) {
         for (int j = 0; j < 9; j += 3) {
           ans = ans && isSquareValid(board, i, j);
         }
       }
       return ans;
  }
};