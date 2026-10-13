// Rock Paper Scissors using an enum.
#include <iostream>
using namespace std;

enum class Move { Rock, Paper, Scissors };

int result(Move player, Move computer) {
    if (player == computer) return 0;

    if ((player == Move::Rock && computer == Move::Scissors) ||
        (player == Move::Paper && computer == Move::Rock) ||
        (player == Move::Scissors && computer == Move::Paper)) {
        return 1;
    }
    return -1;
}

int main() {
    Move player = Move::Rock;
    Move computer = Move::Scissors;
    int outcome = result(player, computer);

    if (outcome == 1) cout << "Player wins\n";
    else if (outcome == 0) cout << "Draw\n";
    else cout << "Computer wins\n";
}
