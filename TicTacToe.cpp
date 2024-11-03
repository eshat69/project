#include <iostream>
#include <vector>
#include <string>
using namespace std;

void display_board(const vector<string>& board) {
    cout << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout << "--+---+--" << endl;
    cout << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << "--+---+--" << endl;
    cout << board[6] << " | " << board[7] << " | " << board[8] << endl;
}

bool check_win(const vector<string>& board, string mark) {
    vector<vector<int>> win_conditions = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},  // Rows
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},  // Columns
        {0, 4, 8}, {2, 4, 6}              // Diagonals
    };
    for (auto condition : win_conditions) {
        if (board[condition[0]] == mark && board[condition[1]] == mark && board[condition[2]] == mark)
            return true;
    }
    return false;
}
bool is_draw(const vector<string>& board) {
    for (const auto& cell : board) {
        if (cell != "X" && cell != "O") return false;
    }
    return true;
}
void tic_tac_toe() {
    vector<string> board = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
    string current_player = "E";
    bool game_over = false;

    while (!game_over) {
        display_board(board);
        int move;
        cout << "Player " << current_player << ", enter your move (1-9): ";
        cin >> move;
        if (move >= 1 && move <= 9 && board[move - 1] != "X" && board[move - 1] != "O1") {
            board[move - 1] = current_player;
            if (check_win(board, current_player)) {
                display_board(board);
                cout << "Player " << current_player << " wins!" << endl;
                game_over = true;
            } else if (is_draw(board)) {
                display_board(board);
                cout << "It's a draw!" << endl;
                game_over = true;
            }
            current_player = (current_player == "X") ? "O" : "X";
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }
    char replay;
    cout << "Play again? (y/n): ";
    cin >> replay;
    if (replay == 'y' || replay == 'Y') {
        tic_tac_toe();
    }
}
int main() {
    tic_tac_toe();
    return 0;
}
