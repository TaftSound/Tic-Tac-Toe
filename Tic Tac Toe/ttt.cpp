//
//  main.cpp
//  Tic Tac Toe
//
//  Created by Matthew Murphy on 5/9/22.
//

//int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}

#include <iostream>
#include <vector>
#include "ttt_functions.h"

int main() {

//declare variables
    char row1[3] = {'_', '_', '_'};
    char row2[3] = {'_', '_', '_'};
    char row3[3] = {' ', ' ', ' '};
    std::string answer;
    int round_number = 1;
    std::vector<int> taken_row_answers;
    std::vector<int> taken_column_answers;
//welcome game message and game start question
    welcome_message();
    std::cin  >> answer;
    bool yes_no = start_game(answer);
    if (yes_no==false) {
            std::cout << "\nPlease return when you are ready to play!\n\n";
        return 0;
    }
    if (yes_no==true) {
        begin_game_message();
    }
 
//gameplay cycle

for (int i = 0; i < 9; i++) {
    std::cout << "Round " << round_number << "\n\n";
    print_board(row1, row2, row3);
//Player X's turn
//============================================================================================================
//Player move entry and approval
int row_answer = 0;
int column_answer = 0;
int first_try = 0;
    while (first_try < 1||check_answer_duplicates(row_answer, column_answer, taken_row_answers, taken_column_answers)==true) {
        if (check_answer_duplicates(row_answer, column_answer, taken_row_answers, taken_column_answers)==true) {
            std::cout << "\nThis choice is taken.\n\n";
            print_board(row1, row2, row3);
        }
    player_turn("row", "Player 1");
        std::cin >> answer;
        row_answer = check_answer(answer);
    player_turn("column");
        std::cin >> answer;
        column_answer = check_answer(answer);
    first_try++;
        }
//Adds answers to taken list and prints updated game board
    taken_row_answers.push_back(row_answer);
    taken_column_answers.push_back(column_answer);

            if (row_answer == 1) {
                row1[column_answer - 1] = 'X';
            }
            else if (row_answer == 2) {
                row2[column_answer - 1] = 'X';
            }
            else if (row_answer == 3) {
                row3[column_answer - 1] = 'X';
            }
    std::cout << "\n";
    print_board(row1, row2, row3);
//checks for win
        if (round_number > 2) {
            if (check_win(row1, row2, row3, 'X') == true) {
            std::cout << "\n";
            player_win('1');
            return 0;
            }
        }
//this part should only be included for player X
        i++;
        if (i>8) {
            std::cout << "The game ends in a tie\n\n";
return 0;
        }

//Player O's turn
//============================================================================================================
//Player move entry and approval
row_answer = 0;
column_answer = 0;
first_try = 0;
    while (first_try < 1||check_answer_duplicates(row_answer, column_answer, taken_row_answers, taken_column_answers)==true) {
        if (check_answer_duplicates(row_answer, column_answer, taken_row_answers, taken_column_answers)==true) {
            std::cout << "\nThis choice is taken.\n\n";
            print_board(row1, row2, row3);
        }
    player_turn("row", "Player 2");
        std::cin >> answer;
        row_answer = check_answer(answer);
    player_turn("column");
        std::cin >> answer;
        column_answer = check_answer(answer);
    first_try++;
        }
//Adds answers to taken list and prints updated game board
    taken_row_answers.push_back(row_answer);
    taken_column_answers.push_back(column_answer);

            if (row_answer == 1) {
                row1[column_answer - 1] = 'O';
            }
            else if (row_answer == 2) {
                row2[column_answer - 1] = 'O';
            }
            else if (row_answer == 3) {
                row3[column_answer - 1] = 'O';
            }
    print_board(row1, row2, row3);
//checks for win
        if (round_number > 2) {
            if (check_win(row1, row2, row3, 'O') == true) {
            std::cout << "\n";
            player_win('2');
            return 0;
            }
        }
//==============================================
    round_number++;
}

}
