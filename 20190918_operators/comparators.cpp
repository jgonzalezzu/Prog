#include<iostream>

int main(void)
{
  std::cout << ((5==5) and  (3 >6))<< "\n";
  std::cout<< ((5==5) or (3>6)) << "\n";
  std::cout<< ((5==5) xor (3>6))<< "\n";

  int a;
  int b;
  a = (b=3, b+8);
  std::cout << a << "\n";

  return 0;
}
 
