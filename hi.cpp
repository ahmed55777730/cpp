#include <iostream>
using namespace std;
  void PrintRandomNumbers(){
      int N = 10;
  for (int i = 0; i < 3; i++)
    cout << rand() % N << endl;
  };
int main()
{
  PrintRandomNumbers();
  return 0;
}