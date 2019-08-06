#include <iostream>

using namespace std;

int main()
{
  int num, digit = 0;
  
  cin >> nums;
  
  while(nums)
  {
    digit++;
    nums /= 10;
  }

  cout << digit;

  return 0;
}
