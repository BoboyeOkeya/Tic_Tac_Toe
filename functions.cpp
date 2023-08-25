/*
This contains the definition of all the functions used.
Through out the program, the word grid and board are used interchangeably, but they mean the samething.
*/

#include <iostream>
#include <stdlib.h>
#include <vector>


/*
This displays the board
Its input is a vector of characters that specify each position on the board(or grid)
*/
void disp_board(std::vector<char> grid){
  char a = grid[0];
  char b = grid[1];
  char c = grid[2];
  char d = grid[3];
  char e = grid[4];
  char f = grid[5];
  char g = grid[6];
  char h = grid[7];
  char i = grid[8];
  std::cout<<"|===|===|===|\n";
  std::cout<<"| "<<a<<" |"<<" "<<b<<" |"<<" "<<c<<" |\n";
  std::cout<<"|===|===|===|\n";
  std::cout<<"| "<<d<<" |"<<" "<<e<<" |"<<" "<<f<<" |\n";
  std::cout<<"|===|===|===|\n";
  std::cout<<"| "<<g<<" |"<<" "<<h<<" |"<<" "<<i<<" |\n";
  std::cout<<"|===|===|===|\n\n";
  }

/*
This contains the introduction message, the rules of the game and how to play the game
*/
void intro(){
  std::cout<<"\t==>INTRODUCTION<==\n\n"<<"Welcome to the Tic-Tac-Toe Game\n"<<"Note: This is strictly a property of 'boboye.inc'.\n"<<"Any unauthorized reproduction will be susceptible to a penalty.\n"<<"The penalty will be to follow me on GitHub and Linkedin for more cool contents xDxD. \n";
  std::cout<<"\n\t==>RULES OF THE GAME<==\n\n"<<"Each of the two player will input either an 'X' or 'O' into the grid shown below.\n\n";

// Create a vector of characters where each character represent each position on the grid
std::vector<char> grid = {'a','b','c','d','e','f','g','h','i'};
// Display the grid or board
disp_board(grid);

std::cout<<"Note: User1 is 'X' & User2 is 'O'\n\n";
std::cout<<"So, for example, if you User1 wants to input 'X' in the position labelled  'a', they have to input 'a' without the apostrophes.\n\n";
}


/*
This creates the  game board with blank values in all the positions
The output is a vector of blank space characters. Which indicates an empty board.
*/
std::vector<char> game_board(){
std::vector<char> grid = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
return grid;
}


/*
This updates the board while indicating whether a particular position on the board has been filled
The inputs are: a single character (a,b,c,...i) indicating the position; the value(either X or O) to be placed at the position indicated by the character; 
a pointer variable representing the grid(or board) that needs to be updated; a pointer variable used to flag wether a position on the grid(or board) has been filled
The output is: a boolean value that indicates whether the grid(or board) has been updated or not.
*/
bool update_board(char grd_pos, char value, std::vector<char>* grid, std::vector<bool>* flags){
  //Initialize updated flag to false
  bool updated = false;

  //Place the values into each position on the grid/board and indicate an update, if the desired position is not yet flagged as filled up. 
  if(grd_pos == 'a'){
    if((*flags)[0] == false){
      (*grid)[0] = value;
      (*flags)[0] = true;
      updated = true;
      }
    else std::cout<<"Position "<<grd_pos<<" is filled up\n"<<"Please choose another position\n";
  }

  else if(grd_pos == 'b'){
    if((*flags)[1] == false){
      (*grid)[1] = value;
      (*flags)[1] = true;
      updated = true;
      }
    else std::cout<<"Position "<<grd_pos<<" is filled up\n"<<"Please choose another position\n";
  }

  else if(grd_pos == 'c'){
  if((*flags)[2] == false){
    (*grid)[2] = value;
    (*flags)[2] = true;
      updated = true;
    }
    else std::cout<<"Position "<<grd_pos<<" is filled up\n"<<"Please choose another position\n";
  }

  else if(grd_pos == 'd'){
  if((*flags)[3] == false){
    (*grid)[3] = value;
    (*flags)[3] = true;
      updated = true;
    }
    else std::cout<<"Position "<<grd_pos<<" is filled up\n"<<"Please choose another position\n";
  }

  else if(grd_pos == 'e'){
  if((*flags)[4] == false){
    (*grid)[4] = value;
    (*flags)[4] = true;
      updated = true;
    }
    else std::cout<<"Position "<<grd_pos<<" is filled up\n"<<"Please choose another position\n";
  }

  else if(grd_pos == 'f'){
  if((*flags)[5] == false){
    (*grid)[5] = value;
    (*flags)[5] = true;
      updated = true;
    }
    else std::cout<<"Position "<<grd_pos<<" is filled up\n"<<"Please choose another position\n";
  }

  else if(grd_pos == 'g'){
  if((*flags)[6] == false){
    (*grid)[6] = value;
    (*flags)[6] = true;
      updated = true;
    }
    else std::cout<<"Position "<<grd_pos<<" is filled up\n"<<"Please choose another position\n";
  }

  else if(grd_pos == 'h'){
  if((*flags)[7] == false){
    (*grid)[7] = value;
    (*flags)[7] = true;
      updated = true;
    }
    else std::cout<<"Position "<<grd_pos<<" is filled up\n"<<"Please choose another position\n";
  }

  else if(grd_pos == 'i'){
  if((*flags)[8] == false){
    (*grid)[8] = value;
    (*flags)[8] = true;
      updated = true;
    }
  else std::cout<<"Position "<<grd_pos<<" is filled up\n"<<"Please choose another position\n";
  }

  return updated;
}

/*
This get the index (or integer value) for a particular position on the board
The input is the grid position (a,b,c,...i)
The output is an integer
*/
int get_index(int user_input){
  int index;
  switch(user_input){
  case 'a':
  index= 0;
  break;
  case 'b':
  index =  1;
  break;
    case 'c':
  index =  2;
  break;
    case 'd':
  index =  3;
  break;
    case 'e':
  index = 4;
  break;
    case 'f':
  index =  5;
  break;
    case 'g':
  index = 6;
  break;
    case 'h':
  index =7 ;
  break;
    case 'i':
  index = 8;
  break;
}
return index;
}

/*
This computes the outcome of the game after each turn. The outcome is either a winner (user1 or user2) or its a tie¨. 
It also flags the end of the game when there is a winner.
It also keep count of the turn of the game to indicate a tie if the maximum number of turn (9) has been reached and there is no winner
Input: a pointer to vector of characters representing the board; a pointer to a boolean variable indicating the end of the game;
a pointer to an integer indicating the present number of turns played so far
Output: a string indicating the outcome(User1, User2, or Tie)
*/
std::string get_outcome(std::vector<char>* board, bool* game_end, int* game_turn){

//Increments the number of turn. The default value is 0
(*game_turn) +=1;

char a = (*board)[0];
char b = (*board)[1];
char c = (*board)[2];
char d = (*board)[3];
char e = (*board)[4];
char f = (*board)[5];
char g = (*board)[6];
char h = (*board)[7];
char i = (*board)[8];

std::string outcome;

//Checks for the winner. There are eight combinations for a winner.
//abc, adg, aei, beh, cfi, ceg, def, ghi
if((a=='X'&&b=='X'&&c=='X')||(a=='X'&&d=='X'&&g=='X')||(a=='X'&&e=='X'&&i=='X')||(b=='X'&&e=='X'&&h=='X')||(c=='X'&&f=='X'&&i=='X')||(c=='X'&&e=='X'&&g=='X')||(d=='X'&&e=='X'&&f=='X')||(g=='X'&&h=='X'&&i=='X')){

*game_end = true;
 outcome="User1";  

} 
else if((a=='O'&&b=='O'&&c=='O')||(a=='O'&&d=='O'&&g=='O')||(a=='O'&&e=='O'&&i=='O')||(b=='O'&&e=='O'&&h=='O')||(c=='O'&&f=='O'&&i=='O')||(c=='O'&&e=='O'&&g=='O')||(d=='O'&&e=='O'&&f=='O')||(g=='O'&&h=='O'&&i=='O')) {

*game_end = true;
outcome="User2"; 

}

//if the turn is upto 9 and there is no winner amongst the user, then its a tie
if( (*game_turn) >= 9 && (outcome != "User1" || outcome != "User2")) outcome = "Tie";

std::cout<<"Moves Played: "<<*game_turn<<"\n";
return outcome;

}


  //validate the user input
  bool validate_input(char user_input){
  std::vector<char> inputs = {'a','b','c','d','e','f','g','h','i'};
  bool valid;
  //check if the user's input is one of the expected inputs
  for(int i = 0; i<inputs.size();i++){
    if(user_input == inputs[i]){
      valid = true;
      break;
    }
    else valid = false;
  }

  // //check if the user's input is a string
  // std::string user_test = (std::string) user_input;
  // if(user_test.size()>1) valid = false;

  return valid;
  } 


/*
This plays the each turn of the game for each user (User1 and User2)

*/

void play(std::string user, std::vector<char>* board, std::vector<bool>* flags){
  //Prompt the user to make an input
  std::cout<<user<<": ";

  //Get user's input which is the position (a,b,c,...,i) at which the user would like to place their value (X or O)
  char user_input;
  std::cin>>user_input;

  //validate the user input
  bool valid = validate_input(user_input);

  //while the user's input is invalid, keep prompting the user to input the right letter
  while(valid==false){
    std::cout<<"\nYou entered an invalid value\n";
    std::cout<<"Please enter a lower case character between letter 'a' to letter 'i': ";
  std::cin>>user_input;
  valid = validate_input(user_input);

  }
  

  //Get the index of the user's input
  int idx = get_index(user_input);
  char value;
  bool updated;

  //Get each user's value User1's value is X, User2's value is O
  if (user == "User1") value = 'X';
  else value = 'O';

  //Update the board with the user's value if the user's desired position has not yet been flagged as filled up 
  if((*flags)[idx] ==false) update_board(user_input,value,board,flags);
  
  //else, if the user's desired position has been flagged as filled up, then keep prompting the user to input a new position until the board has been updated
  else{
    update_board(user_input,value,board,flags);
    while((*flags)[idx] == true){
      std::cout<<user<<": ";
      std::cin>>user_input;
      idx = get_index(user_input);
      updated = update_board(user_input,value,board,flags);
      if(updated) break;
    }
  }

}

