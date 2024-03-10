#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string msg)
{
  cout << msg;
  int num;
  cin >> num;
  return num;
}

int NumberDigitDuplicate(int Number)
{
  int res = 0;
  for (int i = 0; i < Number; i++)
  {
    res = res * 10 + Number;
  }
  return res;
}

void PrintAllPattern(int Number)
{
  for (int i = Number; i >0; i--)
  {
  cout << NumberDigitDuplicate(Number--)<<endl;    
  }
}

int main()
{
  PrintAllPattern(ReadPositiveNumber("Please enter a positive number: "));
  return 0;
}
