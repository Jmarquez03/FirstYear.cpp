#include<iostream>
#include<vector>
#include<iomanip>
#include"fun.hpp"
using namespace std;
int main(){
  //We must initialize a vector from which we can modify the elements for the player input
  vector<char> table = {'1','2','3',
                        '4','5','6',
                        '7','8','9'};
//these bool values will determine which player won
  bool p1win, p2win;
//This will hold the position the player chooses and thus be used to change the value in that position in the vector.
  char p1, p2;
  cout << "Enter a number and your mark will be placed there. First player is X and second player is O\n";
//This while loop will continue until a player wins
while(win(table) == false){
//it is important to include the tries since there are no possible options after the 9 spots have been filled. Whithout this, there would be no way for the ocmputer to tell the user to retry if there is a tie
int tries;
//This prints out the tic-tac-toe game board. Instead of having to print each place with a different value manually, we can just use the vector value assigned to it.
   cout <<  "  " << table[0] <<"   |  " <<  table[1] << "  |  " << table[2] <<"  \n" << 
                "______|_____|_____\n" << 
                 "  " << table[3] <<"   |  " <<  table[4] << "  |  " << table[5] <<"  \n"<<
                "______|_____|_____\n" <<  
                "  " << table[6] <<"   |  " <<  table [7] << "  |  " << table[8] <<"  \n" <<
                "      |     |     \n";
  cout << "Go player 1! ";
  cin >> p1;
  //iterates through the array in search for the value of the vector which matches the input the user made. It then converts to x since that is the token used by the first player
  for(int i = 8; i >=0;){
      if(p1 == table[i]){
        table[i] = 'x';
      }else{
        i--;
      }
  }
  //print out the board again with the new modifications added to it.
         cout <<  "  " << table[0] <<"   |  " <<  table[1] << "  |  " << table[2] <<"  \n" << 
                "______|_____|_____\n" << 
                 "  " << table[3] <<"   |  " <<  table[4] << "  |  " << table[5] <<"  \n"<<
                "______|_____|_____\n" <<  
                "  " << table[6] <<"   |  " <<  table [7] << "  |  " << table[8] <<"  \n" <<
                "      |     |     \n";
//in case the game is won before the 2nd pplayers turn, it is important to check whether the game has been won.
      if(win(table) == true){
      p1win = true;
      break;
    }
  tries ++;
  if(tries > 8){
    break;
  }
  //repeat for player 2
  cout << "Your turn player 2! ";
  cin >> p2;
  for(int i = 8; i >=0;){
      if(p2 == table[i]){
        table[i] = 'o';
      }else{
        i--;
      }
    }
   if(win(table) == true){
      p2win = true;
    }
  tries ++;
  }
//once the "win" condition is met or the tries exceeds 9, the game is ended and the results are displayed to the 
if(p1win == true){
  cout << "Congratulations player 1 you have won!";
}else if(p2win == true){
  cout << "Congratulations player 2 you have won!";
}else{
  cout << "Please try again";
}
}