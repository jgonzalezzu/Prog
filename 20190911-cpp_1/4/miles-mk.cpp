#include<iostream>


int main(void)
{
  double x {0.0};
  std::cout << "Write a distance in Miles to conver to Km" << std::endl;
  std::cin >> x;
  x=x*1.609;
  std::cout << " distance in Miles is: " << x << std::endl;
}
