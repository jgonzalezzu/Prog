#include <iostream> //uso de la librería 

int main(void)
{
  double x = 0.0;
  std::cout << "Escribe el numero" <<  std::endl; //son las <<
  std::cin >> x;
  std::cout << "he leido : " << x << std::endl;
  
  return 0;
}
