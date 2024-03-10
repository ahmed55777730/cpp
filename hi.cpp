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
void PrintDigitsInReverse (int num){
  while (num)
  {
    cout << GetDigit(num) <<"\n";
    num = num / 10;
  }
}
  int main()
{
  PrintDigitsInReverse(ReadPositiveNumber("Please enter a positive number "));
  return 0;
}