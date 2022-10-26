#include <vector>
using namespace std;
//This function goes through all possible win solutions to determine if a player has won
bool win(vector<char> table){
  if(table[0] == table[1] && table[1] == table[2]){
    return true;
}else if(table[3] == table[4] && table[4] == table[5]){
  return true;
  }else if(table[6] == table[7] && table[7] == table[8]){ return true;
}else if(table[0] == table[3] && table[3] == table[6]){
    return true;
  }else if(table[1] == table[4] && table[4] == table[7]){  return true;
  }else if(table[2] == table[5] && table[5] == table[8]){
    return true;
  }else if(table[0] == table[4] && table[4] == table[8]){
    return true;
  }else{
    return false;
  }
}