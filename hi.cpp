#include <iostream>
#include <cstdlib>
using namespace std;
enum enCharacterCategory
{
  uppercaseLettersStart = 65,
  uppercaseLettersEnd = 90,   

};
int readNumber(string msg){
  int num;
  cout << msg << endl;
  cin >> num;
  return num;
}
int randomNum(int From, int To)
{

  int randNum = rand() % (To - From + 1) + From;
  return randNum;
}
char numToChar(int Num){
  return char(Num);
}
string generateKey(){
  string key = "";
  for (int i = 1; i <= 16; i++)
  {
    key+= numToChar(randomNum(enCharacterCategory::uppercaseLettersStart, enCharacterCategory::uppercaseLettersEnd));
    if (i%4==0&&i!=16)
    {
      key += '-';
    }
  }
  return key;
}
void printKeys(int numOfKeys){
  for (int i = 0; i < numOfKeys; i++)
  {
    cout << generateKey() << endl;
  }
}
int main()
{
  // Seeds the random number generator in C++, called only once
  srand((unsigned)time(NULL));
  printKeys(readNumber("Write number of keys what you generate : "));
  return 0;
}