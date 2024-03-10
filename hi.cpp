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

void PrintNumberFrequency(int num1, int num2)
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
  cout << "Digit " << num2 << " Frequency is " << freq << " Time(s)" << endl;
}

int main()
{
  int frequency = ReadPositiveNumber("Please enter a Frequency number: ");
  int positiveNumber = ReadPositiveNumber("Please enter a positive number: ");
  PrintNumberFrequency(frequency, positiveNumber);
  return 0;
}
