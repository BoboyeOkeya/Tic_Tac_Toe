#include <iostream>
#include <stdlib.h>
#include <vector>
#include "functions.hpp"

int main(){
intro();

//create an emtpy Game Board
std::vector<char>board = game_board();

//Initialize the flags to false for all positions, to indicate they are not yet filled up
std::vector<bool> flags ={false,false,false,false,false,false,false,false,false}; 

//Display the gameboard
disp_board(board);

bool game_end=false; //Flags the end of the game
std::string outcome; //Indicates the outcome of a play -- either a User wins or its a tie
int game_turn = 0; //Counts the number of turn, max is 9
std::string user1 = "User1";
std::string user2 = "User2";

std::cout<<"Please input the position(a,b,...,i) where you would like to place your X or O\n\n";

while(game_end!=true){
  //User1's turn
  play(user1, &board, &flags);
  //Display the board after User1 plays
  disp_board(board);
  //Check for the outcome after each turn
  outcome = get_outcome(&board, &game_end, &game_turn);
  //Check if the game has ended(with a winner) or if the max number of turns has been reached
  if(game_end == true || game_turn >= 9) break;

  //User2's turn
  play(user2, &board, &flags);
  //Display the board after User2 plays
  disp_board(board);
  //Check for the outcome after each turn
  outcome = get_outcome(&board, &game_end, &game_turn);
  //Check if the game has ended(with a winner) or if the max number of turns has been reached
  if(game_end == true || game_turn >= 9) break;
}


if(outcome == "Tie") std::cout<<"The game ended in a Tie\n";

else std::cout<<"The winner is: "<<outcome<<"\n";
}