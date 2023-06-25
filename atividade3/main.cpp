#include <iostream>

int main(){
  
  int valor;
  std::cout << "Please enter a integral value type:" << std::endl;
  std::cin >> valor;

  
  std::cout << valor << (valor % 2 == 0 ? " is even":" is odd");

  return 0;
}