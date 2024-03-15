#include <iostream>
#include <cstdlib>
using namespace std;
enum enCharacterCategory
{
  lowercaseLettersStart = 97, 
  lowercaseLettersEnd = 122,  

  uppercaseLettersStart = 65,
  uppercaseLettersEnd = 90,   

  numbersStart = 48,
  numbersEnd = 57, 

  specialCharsStart = 33, 
  specialCharsEnd = 47  
};

int randomNum(int From, int To)
{

  int randNum = rand() % (To - From + 1) + From;
  return randNum;
}
char numToChar(int Num){
  return char(Num);
}
int main()
{
  // Seeds the random number generator in C++, called only once
  srand((unsigned)time(NULL));
  cout << numToChar(randomNum(enCharacterCategory::lowercaseLettersStart,enCharacterCategory::lowercaseLettersEnd)) << endl;
  cout << numToChar(randomNum(enCharacterCategory::uppercaseLettersStart,enCharacterCategory::uppercaseLettersEnd)) << endl;
  cout << numToChar(randomNum(enCharacterCategory::numbersStart,enCharacterCategory::numbersEnd)) << endl;
  cout << numToChar(randomNum(enCharacterCategory::specialCharsStart,enCharacterCategory::specialCharsEnd)) << endl;

  return 0;
}