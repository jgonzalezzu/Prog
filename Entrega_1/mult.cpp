#include <iostream> //uso de la librería 

double x=0.0;

int main(void)
{
  std::cout << "Give a number to multply by 2" <<  std::endl;
  std::cin >> x;
  x=2*x;
  std::cout << "The result is: " << x << std::endl;
  
  return 0;
}
