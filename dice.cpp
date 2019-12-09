#include <vector>
#include <iostream>
#include <cstdlib>

const int NTRY = 10000;

int main (void)
{
  std::vector<int> results(6);

  for(int itry = 0; itry < NTRY; itry++)
    {
      results[rand()%6]+= 1;
    }
  for(const auto & x: results)
    {
      std::cout << x << "\n";
    }
  std::cin.get();
}
