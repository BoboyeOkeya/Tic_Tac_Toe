#include <iostream>
#include <stdlib.h>
#include <vector>

//introduction
void intro(){
std::cout<<"\t==>INTRODUCTION<==\n\n"<<"Welcome to the Tic-Tac-Toe Game\n"<<"Note: This is strictly a property of 'boboye.inc'.\n"<<"Any unauthorized reproduction will be susceptible to a penalty.\n"<<"The penalty will be to follow me on GitHub and Linkedin xDxD. \n";

  std::cout<<"\n\t==>RULES OF THE GAME<==\n\n"<<"Each of the two player will input either an 'X' or 'O' into the grid as shown below.\n\n";

char a = 'a';
char b = 'b';
char c = 'c';
char d = 'd';
char e = 'e';
char f = 'f';
char g = 'g';
char h = 'h';
char i = 'i';

  std::cout<<"|===|===|===|\n";
  std::cout<<"| "<<a<<" |"<<" "<<b<<" |"<<" "<<c<<" |\n";
  std::cout<<"|===|===|===|\n";
  std::cout<<"| "<<d<<" |"<<" "<<e<<" |"<<" "<<f<<" |\n";
  std::cout<<"|===|===|===|\n";
  std::cout<<"| "<<g<<" |"<<" "<<h<<" |"<<" "<<i<<" |\n";
  std::cout<<"|===|===|===|\n";

  std::cout<<"\n\nSo, for example, if you wish to input 'X' in the position labelled  'a', you would have to specify that in your input.\n\n";
std::cout<<"User1 is 'X' & User2 is 'O'\n\n";
}


//creates the  game board grd_pos(a,b...i) & value(X|O)
std::vector<char> game_board(char grd_pos, char value){
// std::vector<char> grid = {'a','b','c','d','e','f','g','h','i'};
std::vector<char> grid = {' ',' ',' ',' ',' ',' ',' ',' ',' '};

return grid;
}

//updates the table
bool update_board(char grd_pos, char value, std::vector<char>* grid, std::vector<bool>* flags){

//initialize updated flag to false
bool updated = false;

//set the values into each position on the grid/board
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

//Displays the board
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

// get the index for that position
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

// Compute the winner either its user1 , or user2, or its a tie
std::string get_winner(std::vector<char>* board, bool* game_end, int* game_turn){
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

std::string winner;

if((a=='X'&&b=='X'&&c=='X')||(a=='X'&&d=='X'&&g=='X')||(a=='X'&&e=='X'&&i=='X')||(b=='X'&&e=='X'&&h=='X')||(c=='X'&&f=='X'&&i=='X')||(c=='X'&&e=='X'&&g=='X')||(d=='X'&&e=='X'&&f=='X')||(g=='X'&&h=='X'&&i=='X')){
  *game_end = true;
 winner="User1";  
} 
else if((a=='O'&&b=='O'&&c=='O')||(a=='O'&&d=='O'&&g=='O')||(a=='O'&&e=='O'&&i=='O')||(b=='O'&&e=='O'&&h=='O')||(c=='O'&&f=='O'&&i=='O')||(c=='O'&&e=='O'&&g=='O')||(d=='O'&&e=='O'&&f=='O')||(g=='O'&&h=='O'&&i=='O')) {
  *game_end = true;
  winner="User2"; 
}
if( (*game_turn) >= 9 && (winner != "User1" || winner != "User2")) winner = "Tie";

std::cout<<"Count "<<*game_turn<<"\n";
return winner;

}