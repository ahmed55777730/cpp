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
void PrintDigitsInReverse(int num)
{    
  int result = 0;
  while (num)
  {
    result += GetDigit(num);
    num = num / 10;
  }    
  cout << result << endl;
}
int main()
{
  PrintDigitsInReverse(ReadPositiveNumber("Please enter a positive number "));
  return 0;
}