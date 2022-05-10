//
//  Header.h
//  Tic Tac Toe
//
//  Created by Matthew Murphy on 5/9/22.
//

#ifndef Header_h
#define Header_h

//function declarations
void welcome_message();
void begin_game_message();
void player_win(char player);
bool start_game(std::string answer);
void print_board(char row1[3], char row2[3], char row3[3]);
int check_answer(std::string answer);
bool check_answer_duplicates(int row_answer, int column_answer,
                             std::vector<int> taken_row_answers,
                             std::vector<int> taken_column_answers);
bool check_win(char row1[3], char row2[3], char row3[3], char player);
void player_turn(std::string row_or_column, std::string player);
void player_turn(std::string row_or_column);



#endif /* Header_h */
