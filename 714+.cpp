#include<iostream>
#include<vector>

const int NREADS = 3;
const int MIN = 10;
const int MAX = 100;

int main (void)
{
  std::vector<int> numbers;
  int num;
  for(int iread = 0; iread < NREADS; iread++)
    {
      std::cin >> num;
      numbers.push_back(num);
	}
  for(const auto & x : numbers)
    {
      std::cout << x << "  ";
    }
  std::cout << "\n";
}
