#include <iostream>

using namespace std;
string ReadPassword(string msg){
  cout << msg << endl;
  string pass;
  cin >> pass;
  return pass;
}
bool PrintTrailsForPass(string pass)
{
  
  int Trial = 0;        
  string word = "";
  for (int i = 0; i < 26; i++)
  {
    for (int j = 0; j < 26; j++)
    {
      for (int k = 0; k < 26; k++)
      {
        word += char(i + 65);
        word += char(j + 65);
        word += char(k + 65);
        cout << "Trail "<<Trial++<<" for pass is : "<<word<< endl;
        if (word == pass)
        {
          cout << "\nPassword is " << word << "\n";
          cout << "Found after ";
          cout << Trial << " Trial(s)\n";
          return true;
        }
        word = "";
      }
    }
  }
  return false;
}

int main()
{
  PrintTrailsForPass(ReadPassword("Write The Password that is a word from three letters capital : "));
  return 0;
}
