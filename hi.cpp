#include <iostream>

using namespace std;
enum enEncreptionOrDecreption
{
  Encreption = 1,
  Decreption = -1
};
string ReadWord(string msg)
{
  cout << msg << endl;
  string word;
  cin >> word;
  return word;
}
void PrintEncreptionOrDecreption(string word, enEncreptionOrDecreption type, int key)
{
  string newWord = "";

  for (int i = 0; i < word.size(); i++)
  {
    newWord+=char(int(word[i])+type*key);
  }
  cout << newWord <<endl;
}

int main()
{
  int key = 2;
  PrintEncreptionOrDecreption(ReadWord("Write The Password that is a word from three letters capital : "), enEncreptionOrDecreption::Decreption, key);
  return 0;
}
