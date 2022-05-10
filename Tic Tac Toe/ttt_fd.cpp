//
//  ttt_fd.cpp
//  Tic Tac Toe
//
//  Created by Matthew Murphy on 5/9/22.
//

#include <iostream>
#include <vector>

//message functions
void welcome_message() {
    std::cout <<"\n"
              <<"========================\n"
              <<" Welcome to Tic Tac Toe!\n"
              <<"========================\n\n"
              << "Are you ready to play?\n\n"
              << " 1) Yes\n"
              << " 2) No\n\n";
}
void begin_game_message() {
    std::cout << "\n"
              << "========================\n"
              << "+     LET US BEGIN     +\n"
              << "========================\n\n";
}
void player_win(char player) {
    std::cout << "Player " << player << " Wins!!!\n\n";
}
//question/answer functions
//Yes No questions
bool start_game(std::string answer) {
    while (answer!="yes"&&
        answer!="Yes"&&
        answer!="1"&&
        answer!="one"&&
        answer!="One"&&
        answer!="Y"&&
        answer!="y"&&
        answer!="no"&&
        answer!="No"&&
        answer!="2"&&
        answer!="Two"&&
        answer!="two"&&
        answer!="n"&&
        answer!="N") {
        std::cout << "\nPlease choose yes or no.\n\n";
        std::cin >> answer;
        }
    if (answer=="yes"||
        answer=="Yes"||
        answer=="1"||
        answer=="one"||
        answer=="One"||
        answer=="Y"||
        answer=="y") {
    return 1;
    }
    else {
        return 0;
    }
    
}

//print state of tic tac toe board
void print_board(char row1[3], char row2[3], char row3[3]) {
    std::cout << "_" << row1[0] << "_|_" << row1[1] << "_|_" << row1[2] << "_\n";
    std::cout << "_" << row2[0] << "_|_" << row2[1] << "_|_" << row2[2] << "_\n";
    std::cout << " " << row3[0] << " | " << row3[1] << " | " << row3[2] << " \n";
        std::cout << "\n";
}
int check_answer (std::string answer) {
    while (answer!="1"&&answer!="2"&&answer!="3"&&answer!="one"&&answer!="two"&&
        answer!="three"&&answer!="One"&&answer!="Two"&&answer!="Three"&&answer!="row 1"
        &&answer!="row 2"&&answer!="row 3"&&answer!="Row 1"&&answer!="Row 2"&&answer!="Row 3"
        &&answer!="column 1"&&answer!="column 2"&&answer!="column 3"&&answer!="Column 1"
        &&answer!="Column 2"&&answer!="Column 3"&&answer!="row one"&&answer!="Row one"
        &&answer!="column one"&&answer!="Column one"&&answer!="row two"&&answer!="Row two"
        &&answer!="column two"&&answer!="Column two"&&answer!="row three"&&answer!="Row three"
        &&answer!="column three"&&answer!="Column three") {
            std::cout << "\nPlease choose a valid answer\n\n";
            std::cin >> answer;
        }
    if (answer=="1"||answer=="one"||answer=="One"||answer=="row 1"||answer=="Row 1"
        ||answer=="row one"||answer=="Row one"||answer=="column 1"||answer=="Column 1"
        ||answer=="column one"||answer=="Column one") {
            return 1;
        }
    if (answer=="2"||answer=="two"||answer=="Two"||answer=="row 2"||answer=="Row 2"
        ||answer=="row two"||answer=="Row two"||answer=="column 2"||answer=="Column 2"
        ||answer=="column two"||answer=="Column two") {
            return 2;
        }
    if (answer=="3"||answer=="three"||answer=="Three"||answer=="row 3"||answer=="Row 3"
        ||answer=="row three"||answer=="Row three"||answer=="column 3"||answer=="Column 3"
        ||answer=="column three"||answer=="Column three") {
            return 3;
        }
    return 0;
}

//Player turns/////////////////////////////////////
void player_turn(std::string row_or_column, std::string player) {
    if (row_or_column=="row")  {
    std::cout << player << " make your move\n\n"
              << " 1) Row 1\n"
              << " 2) Row 2\n"
              << " 3) Row 3\n\n";
 }
}
void player_turn(std::string row_or_column) {
    if (row_or_column=="column")  {
    std::cout << "\n 1) Column 1\n"
              << " 2) Column 2\n"
              << " 3) Column 3\n\n";
 }

 }

bool check_answer_duplicates(int row_answer, int column_answer,
                             std::vector<int> taken_row_answers,
                             std::vector<int> taken_column_answers) {
    for (int i = 0; i < taken_row_answers.size(); i++) {
        if (taken_row_answers[i] == row_answer&&
            taken_column_answers[i] == column_answer) {
                return 1;
            }
    }
        return 0;
}

bool check_win(char row1[3], char row2[3], char row3[3], char player) {
    if (row1[0] == player && row1[1] == player && row1[2] == player) {
        return 1;
    }
    if (row2[0] == player && row2[1] == player && row2[2] == player) {
        return 1;
    }
    if (row3[0] == player && row3[1] == player && row3[2] == player) {
        return 1;
    }
    if (row1[0] == player && row2[0] == player && row3[0] == player) {
        return 1;
    }
    if (row1[1] == player && row2[1] == player && row3[1] == player) {
        return 1;
    }
    if (row1[2] == player && row2[2] == player && row3[2] == player) {
        return 1;
    }
    if (row1[0] == player && row2[1] == player && row3[2] == player) {
        return 1;
    }
    if (row1[2] == player && row2[1] == player && row3[0] == player) {
        return 1;
    }
    else {
        return 0;
    }
}
