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

string LetterDuplicate(int Number)
{
  string res = "";
  for (int i = 0; i < Number; i++)
  {
    res +=char(Number+64);
  }
  return res;
}

void PrintAllPattern(int Number)
{
  for (int i = 1; i <=Number; i++)
  {
  cout << LetterDuplicate(i)<<endl;    
  }
}

int main()
{
  PrintAllPattern(ReadPositiveNumber("Please enter a positive number: "));
  return 0;
}
