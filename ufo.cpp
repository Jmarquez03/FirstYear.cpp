#include <iostream>
#include <string>
#include <vector> 
#include "ufo_functions.hpp"

int main() {
  char letter;
  std::vector <char> incorrect;
  bool guess = false;
  greet();
  std::string codeword = "barnacles", answer = "_________";
  int misses = 0;
  
  while (answer != codeword && misses < 7){
    display_misses(misses);
     display_status(incorrect, answer);
     std::cout << "\n\nPlease enter your guess: ";
     std::cin >> letter;
    for(int i = 0; i < codeword.length(); i++){
      if(letter == codeword[i]){
        answer[i] = letter;
        guess = true;
      }
    }
    if(guess){
       std::cout << "\nCorrect!";
    }else{
        std::cout << "Incorrect! The tractor beam pulls the person in further.";
        incorrect.push_back(letter);
        misses ++;
        }
    guess = false;
    }
  end_game(answer, codeword);
}