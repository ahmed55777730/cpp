
#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
  int Number = 0;
  do
  {
    cout << Message << endl;
    cin >> Number;
  } while (Number <= 0);
  return Number;
}
int RandomNumber(int From, int To)
{ // Function to generate a random number
  int randNum = rand() % (To - From + 1) + From;
  return randNum;
}

void PrintArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << arr[i] << " ";
  cout << "\n";
}
void OrderedArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    arr[i] = i+1;
  }
}
void ShuffleArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    int Temp = arr[i];
    int Random = RandomNumber(0, arrLength);
    arr[i] = arr[Random];
    arr[Random] = Temp;
  }
}
int main()
{
  srand((unsigned)time(NULL));
  int arr[100];
  int arrLength = ReadPositiveNumber("Write the length of array");
  OrderedArray(arr, arrLength);
  cout
      << "\nThe ordered array: ";
  PrintArray(arr, arrLength);
  ShuffleArray(arr, arrLength);
  cout
      << "\nThe shuffled array: ";
  PrintArray(arr, arrLength);

  return 0;
}