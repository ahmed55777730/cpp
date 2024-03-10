#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enPerfectNotPerfect
{
  Perfect = 1,
  NotPerfect = 2
};
int ReadPositiveNumber(string msg)
{
  cout << msg;
  int num;
  cin >> num;
  return num;
}
enPerfectNotPerfect CheckPerfect(int Number)
{
  int result = 0;
  for (int i = 1; i < Number; i++)
  {
    if (Number%i==0)
    {
      result += i;
    }
  }
  if (result==Number)
  {
    return enPerfectNotPerfect::Perfect;
  }
  else{
    return enPerfectNotPerfect::NotPerfect;
  }
}
void PrintPerfectNumbersFrom1ToN (int num){
  for (int i = 2; i < round(num/2); i++)
  {
    if(CheckPerfect(i)==enPerfectNotPerfect::Perfect){
      cout << i << endl;
    }
  }
  
}
  int main()
{
  PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number "));
  return 0;
}