#include <iostream>
#include <string>
using namespace std;

void PrintAllPattern()
{
  for (int i = 0; i <26; i++)
  {
    for (int j = 0; j < 26; j++)
    {
      for (int k = 0; k < 26; k++)
      {
        cout << char(i + 65) << char(j + 65) << char(k + 65) << endl;
      }
      
    }
        
  }
}

int main()
{
  PrintAllPattern();
  return 0;
}
