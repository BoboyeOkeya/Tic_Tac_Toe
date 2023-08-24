#include <iostream>
#include <stdlib.h>
#include <vector>

void intro();
std::vector<char> game_board(char grd_pos, char value);
void disp_board(std::vector<char> grid);
bool update_board(char grd_pos, char value, std::vector<char>* grid, std::vector<bool>* flags);
int get_index(int user_input);
std::string get_winner(std::vector<char>* board, bool* game_end, int* game_turn);