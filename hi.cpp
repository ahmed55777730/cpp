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
int GetDigit(int Number)
{
  return Number % 10;
}
void PrintNumberInReverse(int num)
{    
  int result = 0;
  int i = 1;
  while (num)
  {
    result = result*10 + GetDigit(num);
    num = num / 10;
  }    
  cout << result << endl;
}
int main()
{
  PrintNumberInReverse(ReadPositiveNumber("Please enter a positive number "));
  return 0;
}