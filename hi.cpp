#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enPrimNotPrime
{
  Prime = 1,
  NotPrime = 2
};
int ReadPositiveNumber(string msg)
{
  cout << msg;
  int num;
  cin >> num;
  return num;
}
enPrimNotPrime CheckPrime(int Number)
{
  int M = round(Number / 2);
  for (int Counter = 2; Counter <= M; Counter++)
  {
    if (Number % Counter == 0)
      return enPrimNotPrime::NotPrime;
  }
  return enPrimNotPrime::Prime;
}
void PrintPrimeNumbersFrom1ToN (int num){
  for (int i = 2; i < round(num/2); i++)
  {
    if(CheckPrime(i)==enPrimNotPrime::Prime){
      cout << i << endl;
    }
  }
  
}
  int main()
{
  PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number "));
  return 0;
}