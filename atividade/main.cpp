#include <iostream>
#include <string>

int main(){
  
  std::string place;

  std::cout << "Where do you live?" << std::endl;

  std::getline(std::cin,place);


  std::cout << "I've heard great things about " << place << ". I'd like to go sometime." << std::endl;


 
  return 0;
}