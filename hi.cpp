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

int NumberDigit(int Number)
{
  return Number % 10;
}

int DigitFrequency(int num1, int num2)
{
  int freq = 0;
  while (num1)
  {
    if (num2 == NumberDigit(num1))
    {
      freq++;
    }
    num1 /= 10;
  }
  return freq;
  //
}
void PrintAllDigits(int number)
{
  for (int i = 0; i < 10; i++)
  {
    int Freq = DigitFrequency(number, i);
    if (Freq)
    {
      cout << "Digit " << i << " Frequency is " << Freq << " Time(s)" << endl;
    }
  }
}

int main()
{
  PrintAllDigits(ReadPositiveNumber("Please enter a positive number: "));
  return 0;
}
