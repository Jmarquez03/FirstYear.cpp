#include <iostream>
int main() {
  double pesos, reais, soles, dollars;
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos; 
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
  /*Peso: 0.00023 US Dollar
    Reais: 0.19
    Soles: 0.26
  */
  dollars = (0.00023 * pesos) + (0.19 * reais) + (0.26 * soles);
  std::cout << "US Dollars = $" << dollars; 
  return 0;
}