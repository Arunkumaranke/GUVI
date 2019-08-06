#include <iostream>

using namespace std;

int main()
{
  int Elements, sum = 0, avg, inst = 0;;
  
  cin >> noOfElements;
  
  while (inst++ != Elements)
  {
    int num;
    cin >> num;
    sum += num;
  }
  
  avg = sum / Elements;
  
  cout << avg;
  
  return 0;
}
