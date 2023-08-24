#include <iostream>
#include <stdlib.h>
#include <vector>
#include "functions.hpp"

int main(){
intro();

//create game board grd_pos(a,b...i) & value(X|O)
std::vector<char>board = game_board(' ', ' ');
//set the flags
std::vector<bool> flags ={false,false,false,false,false,false,false,false,false}; 

// //display the gameboard
disp_board(board);

// //Update the gameboard
// update_board('a', 'X', &board, &flags);
// disp_board(board);
// update_board('a', 'X', &board, &flags);
// disp_board(board);

// update_board('i', 'X', &board, &flags);
// disp_board(board);


// // input
bool game_end=false; //indicate game end
std::string winner; // indicate winner/tie
char user1; //user1 input holder
char user2; //user2 input holder
int idx; //grid position index
bool updated; //shows whether the table has been updated or not
int game_turn = 0; // counts the number of turn, max is 9

std::cout<<"Please input the position(a,b...i) where you would like to place your X or O\n\n";

while(game_end!=true){
  // def play(std::string user, std::vector<char>* board, std::vector<bool> flags){

  // }

//User1's turn
std::cout<<"User1: ";
std::cin>>user1;
//get index
idx = get_index(user1);
//if the grid position is not yet filled or not
if(flags[idx] == false) update_board(user1, 'X', &board, &flags);
else{
  update_board(user1, 'X', &board, &flags);
  //while the inital position still remains filled and user hasnt selected a new position
while(flags[idx] == true){
  std::cout<<"User1: ";
    std::cin>>user1;
    idx = get_index(user1);
    updated = update_board(user1, 'X', &board, &flags);
    if(updated) break;
    }
}

//display the updated board
disp_board(board);

//check for winner after each turn
winner = get_winner(&board, &game_end, &game_turn);
// std::cout<<"Main Count "<<game_turn<<"\n";

//check if there is a winner or the max number of turns has been reached
if(game_end == true) break;
else if(game_turn >= 9) break;


//User2's turn
std::cout<<"User2: ";
std::cin>>user2;
//get index
idx = get_index(user2);
if(flags[idx] == false) update_board(user2, 'O', &board, &flags);
else{
update_board(user2, 'O', &board, &flags);
while(flags[idx] == true){
  std::cout<<"User2: ";
    std::cin>>user2;
    idx = get_index(user2);
    updated = update_board(user2, 'O', &board, &flags);
    if(updated) break;
    }
}
disp_board(board);
//check for winner after each turn
winner = get_winner(&board, &game_end, &game_turn);
std::cout<<"Main Count "<<game_turn<<"\n";
if(game_end == true) break;
else if(game_turn >= 9) break;

}

if(winner == "Tie") std::cout<<"The game ended in a Tie\n";
else std::cout<<"The winner is: "<<winner<<"\n";
}