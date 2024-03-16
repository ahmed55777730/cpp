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
void ReadRandomArray(int arr[100], int &arrLength)
{
  cout << "\nEnter number of elements:\n";
  cin >> arrLength;
  for (int i = 0; i < arrLength; i++)
  {
    arr[i] = RandomNumber(0, 100);
  }
}

void PrintArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << arr[i] << " ";
  cout << "\n";
}
void PrintMinOfArray(int arr[100], int arrLength)
{
  int Max = arr[0];
  for (int i = 0; i < arrLength; i++)
  {
    if (arr[i] < Max)
    {
      Max = arr[i];
    }
  }
  cout << "Max number in array is : " << Max << "\n";
}
int main()
{
  srand((unsigned)time(NULL));
  int arr[100], arrLength;
  ReadRandomArray(arr, arrLength);
  cout << "\nOriginal array: ";
  PrintArray(arr, arrLength);
  PrintMinOfArray(arr, arrLength);
  return 0;
}