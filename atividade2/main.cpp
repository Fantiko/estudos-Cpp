#include <iostream>

int main(){
  
  double celsius;
  std::cout << "Please enter a degre value in Celsius:" << std::endl;
  std::cin >> celsius;

  double fahrenheit = (9.0 / 5) * celsius + 32;

  std::cout << celsius << " Celsius is " << fahrenheit << " fahrenheit" << std::endl;


  return 0;
}