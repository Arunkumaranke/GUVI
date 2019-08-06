#include <iostream>
#define STARTS 1
#define ENDS 10

using namespace std;

int main()
{
  int num;
  
  cin >> num;
  
  (num >= STARTS && num <= ENDS) ? cout << "yes" : cout << "no";
  
  return 0;
}
