/*
This contains the function declarations.
*/
#include <iostream>
#include <stdlib.h>
#include <vector>
void intro();
std::vector<char> game_board();
void disp_board(std::vector<char> grid);
bool update_board(char grd_pos, char value, std::vector<char>* grid, std::vector<bool>* flags);
int get_index(int user_input);
std::string get_outcome(std::vector<char>* board, bool* game_end, int* game_turn);
void play(std::string user, std::vector<char>* board, std::vector<bool>* flags);
bool validate_input(char* user_input);
void trim_input();
bool is_in_grid(char user_input);