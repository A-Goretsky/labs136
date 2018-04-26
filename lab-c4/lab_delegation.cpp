#include <iostream>
#include <string>

const int BOARD_HEIGHT = 6;
const int BOARD_WIDTH = 7;
int board[BOARD_HEIGHT][BOARD_WIDTH];

using std::string;

void printBoard() {
    for (int row = 0; row < BOARD_HEIGHT; row++) {
        for (int col = 0; col < BOARD_WIDTH; col++) {
            std::cout << board[row][col] << " ";
        }
        std::cout << "\n";
    }
    return;
}

int main() {
    std::cout << "GAME START!" << "\n\n";
    bool playing_game = true;
    string player_input = 0;
    while (playing_game) {
        printBoard();
        std::cout << "Your turn, Player One! Column: " << "\n";
        std::cin >> player_input;
        filter_input(player_input);
    }
    return 0;
}

bool filter_input(string input) {
    return 0;
}