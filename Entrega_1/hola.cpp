#include<iostream>
#include<string>

int main(void)
{
  std::string name ;
  std::cout << "Hola, ¿Cual es su nombre?" <<  std::endl;
  std::cin >> name;
  std::cout <<"Un gusto conocerte " << name << ", ten un lindo dia" << std::endl;
  
  return 0;
}
