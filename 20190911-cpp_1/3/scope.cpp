#include <iostream> //uso de la librer�a 

int main(void)
{
  double x = 3.14;
  std::cout << &x << "\n";
  {
    double x = 3.142;
    std::cout << &x << "\n";
  }
    
  return 0;
}
