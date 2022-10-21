#include <iostream>
#include<string>
bool is_palindrome(std::string text){
std::string reverse; 
  for(int i = text.size() - 1; i >= 0; i--){
    reverse.push_back(text[i]);
  }
  
if(reverse == text){
  return true;
}else{
  return false;
}
}

int main() {
  std::string text;
  std::cout << "Enter a word you would like to run through a palindrome check";
  std::cin >> text;
  std::cout << is_palindrome(text);
}