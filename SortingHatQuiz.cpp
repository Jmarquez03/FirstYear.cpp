#include <iostream>

int main(){

  //the magic starts here
int answer1, answer2, answer3, answer4, gryffindor, hufflepuff, ravenclaw, slytherin, max = 0;

std::cout << "The Sorting Hat Quiz!\n";
//Question 1
std::cout << "Q1) When I'm dead, I want to people to remember me as:\n" 
<< "  1) The Good\n  2) The Great\n  3) The Wise\n  4) The Bold\n";

std::cin >> answer1;
switch (answer1){
  case 1:
    hufflepuff += 1;
    break;
  case 2:
    slytherin += 1;
    break;
  case 3:
    ravenclaw += 1;
    break;
  case 4:
    gryffindor += 1;
    break;
  default:
    std::cout << "Invalid input\n";
    break;
}
//Question 2
std::cout << "Q2) Dawn or Dusk?\n" << "\n" << "  1)Dawn\n" << "  2)Dusk\n";
std::cin >> answer2;
  switch(answer2){
    case 1:
      gryffindor += 1;
      ravenclaw += 1;
      break;
    case 2:
      hufflepuff += 1;
      slytherin += 2;
      break;
    default:
      std::cout << "Invalid input\n";
      break;
  }
//Question 3
std::cout << "Q3) Which kind of instrument most pleases your ear?\n"
<< "\n" 
<< "  1) The violin\n" 
<< "  2) The trumpet\n"
<< "  3) The piano\n" 
<< "  4) The drum\n";

std::cin >> answer3;
  switch(answer3){
    case 1:
      slytherin += 1;
      break;
    case 2:
      hufflepuff += 1;
      break;
    case 3:
      ravenclaw += 1;
      break;
    case 4:
      gryffindor += 1;
      break; 
    default:
      std::cout << "Invalid input\n";
      break;
  }
  //Question 4
  std::cout  << "Q4) which road tempts you most?\n" 
  << "\n" << " 1) The wide, sunny grassy lane\n" 
  << "  2) The narrow, dark, lantern-lit alley\n" 
  << "  3) The twisting, leaf-strewn path through woods\n"
  << "  4) The cobbled street lined (ancient buildings)\n";
  std::cin >> answer4;
  
  switch(answer4){
    case 1:
      hufflepuff += 1;
      break;
    case 2:
      slytherin += 2;
      break;
    case 3:
      gryffindor += 1;
      break;
    case 4:
      ravenclaw += 1;
      break;
    default:
      std::cout << "Invalid input\n";
      break;
  }
//the answer
  std::string house;
  if (gryffindor > max) {
  max = gryffindor;
  house = "Gryffindor";
}
if (hufflepuff > max) {
  max = hufflepuff;
  house = "Hufflepuff";
}
if (ravenclaw > max) {
  max = ravenclaw;
  house = "Ravenclaw";
}

if (slytherin > max) {
  max = slytherin;
  house = "Slytherin";
}
std::cout << house << "!\n";
}