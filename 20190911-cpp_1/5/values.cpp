#include<iostream>


int val1, val2;

int main(void)
{
  std::cout << "Write two integer values to give u min, max, difference, product and ratio" << std::endl;
  std::cin >> val1;
  std::cin >> val2;
  int sum;
  int dif12;
  int dif21;
  int dot;
  if(val1<val2)
    {
      std::cout<<"El menor valor es: "<<val1<<std::endl;
      std::cout<<"El mayor valor es: "<<val2<<std::endl;
    }
  else
    {
      std::cout<<"El menor valor es: "<<val2<<std::endl;
      std::cout<<"El mayor valor es: "<<val1<<std::endl;
    }

  sum = val1+val2;
  dif12 = val1-val2;
  dif21 = val2-val1;
  dot = val1*val2;

    std::cout<<"La suma de los valores es: "<<sum <<std::endl;
    std::cout<<"La diferencia de los valores 1 y 2 es: "<<dif12 <<std::endl;
    std::cout<<"La diferencia de los valores 2 y 1 es: "<<dif21 <<std::endl;
    std::cout<<"El producto de los valores  es: "<<dot <<std::endl;
    
  
  return 0;
}
