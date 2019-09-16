//code name

#include<iostream> //processor use


int main(void)
{
  double x = 0.0;
  double y = 0.0;
  std::cout <<"Write a distance in Furlongs to convert to Yards" <<std::endl;
  std::cin >> x;
  y=x*220;
  std::cout << x << " Furlongs is " << y <<std::endl;

  return 0;
}
