#include <iostream>
#include <stdlib.h>
int main() {
  int user, computer;

  srand (time(NULL));

  computer = rand() % 3 + 1;

  user = 0;
  std::cout << "====================\n";
  std::cout << "rock paper scissors lizard spock!\n";
  std::cout << "====================\n";
 
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🤏\n";
  std::cout << "5) 🖖\n";
 
  std::cout << "shoot! ";
  std::cin >> user;
  if(computer == 1 && user == 1){
  std::cout << "Computer throws rock\n";
  std::cout << "It's a tie!\n";
  }
  else if (computer == 1 && user == 2){
  std::cout << "Computer throws rock\n";
  std::cout << "You win!\n";
  }
  else if (computer == 1 && user == 3){
  std::cout << "Computer throws rock\n";
  std::cout << "Oh no! you lost:(\n";
  }
  else if (computer == 1 && user == 4){
  std::cout << "Computer throws rock\n";
  std::cout << "Oh no! you lost:( \n";
  }
  else if (computer == 1 && user == 5){
  std::cout << "Computer throws rock\n";
  std::cout << "You win!\n";
  }
  else if ( computer == 2 && user == 1){
    std::cout << "Computer throws paper\n";
    std::cout << "Oh no! you lost:(\n";
  }
  else if (computer == 2 && user == 2){
    std::cout << "Computer throws paper\n";
    std::cout << "It's a tie!\n";
  }
  else if (computer == 2 && user == 3){
   std::cout << "Computer throws paper\n";
   std::cout << "You win!\n";
  }
  else if (computer == 2 && user == 4){
   std::cout << "Computer throws paper\n";
   std::cout << "You win!\n";
  }
  else if (computer == 2 && user == 5){
  std::cout << "Computer throws paper \n";
  std::cout << "Oh no! you lost:(\n";
  }
  else if (computer == 3 && user == 1){
    std::cout << "Computer throws scissors\n";
    std::cout << "You win!\n";
  }
  else if (computer == 3 && user == 2){
    std::cout << "Computer throws scissors\n";
    std::cout << "Oh no! you lost:(\n";
  }
  else if (computer == 3 && user == 3){
    std::cout << "Computer throws scissors\n";
    std::cout << "It's a tie!\n";
  }
  else if (computer == 3 && user == 4){
     std::cout << "Computer throws scissors\n";
     std::cout << "Oh no! you lost:(\n";
  }
  else if (computer == 3 && user == 5){
      std::cout << "Computer throws scissors\n";
      std::cout << "You win!\n";
  }
  else if(computer == 4 && user == 1){
    std::cout << "Computer throws lizard\n";
    std::cout << "You win!\n";
  }
  else if(computer == 4 && user == 2){
    std::cout << "Computer throws lizard\n"; 
    std::cout << "Oh no! you lost:(\n";
  }
  else if(computer == 4 && user == 3){
   std::cout << "Computer throws lizard\n"; 
   std::cout << "You win!\n";
  }
  else if(computer == 4 && user == 4){
    std::cout << "Computer throws lizard\n";
    std::cout << "It's a tie!\n";
  }
  else if(computer == 4 && user == 5){
    std::cout << "Computer throws lizard\n";
    std::cout << "Oh no! you lost:(\n";
  }
  else if(computer == 5 && user == 1){
    std::cout << "Computer throws Spock\n";
    std::cout << "Oh no! you lost:(\n";
  }
  else if(computer == 5 && user == 2){
    std::cout << "Computer throws Spock\n";
    std::cout << "Oh no! you lost:(\n";
  }
  else if(computer == 5 && user == 3){
    std::cout << "Computer throws Spock\n";
    std::cout << "You win!\n";
  }
  else if(computer == 5 && user == 4){
    std::cout << "Computer throws Spock\n";
    std::cout << "You win!\n";
  }
  else if(computer == 5 && user == 5){
    std::cout << "Computer throws Spock\n";
    std::cout << "It's a tie!\n";
  }
  else{
  std::cout << "That's not an option >:[\n" << "Please try again\n";
  }
}