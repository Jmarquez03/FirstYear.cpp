#include <iostream>

int main() {
    std::string dog_name;
  int dog_age, early_years, later_years, human_years;
  std::cout << "What is your dog's name?";
  std::cin >> dog_name;
  std::cout << "how old is he/she in years?";
  std::cin >> dog_age;
  //The first 2 years of a dog's life is equivalent to 21 human years
  early_years = 21;
  //Each of the following years is equal to 4 human years
  later_years = (dog_age - 2) * 4;
  //we add the dogs years which we converted into human years
  human_years = early_years + later_years;
  std::cout << "Hi " << dog_name << "! Ruff ruff, you are " << human_years << " years old in human years. \n";
}