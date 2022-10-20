#include <iostream>
#include <cmath>

int main() {
  double a, b, c, root1, root2;
  //acquiring value a
  std::cout << "Enter a: ";
  std::cin >> a;
  //acquiring value b
  std::cout << "Enter b: ";
  std::cin >> b;
  //acquiring value c
  std::cout << "Enter c: ";
  std::cin >> c;
  //getting the positive root
  root1 = (-b + std::sqrt(b*b - 4*a*c))/(2*a);
  //getting the negative root
  root2 = (-b - std::sqrt(b*b - 4*a*c))/(2*a);
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";
}