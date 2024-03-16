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
bool isPrime(int number)
{
  // Handling special cases
  if (number <= 1)
    return false;
  if (number <= 3)
    return true;

  // Check if number is divisible by 2 or 3
  if (number % 2 == 0 || number % 3 == 0)
    return false;

  // Check for divisibility starting from 5 up to the square root of the number
  for (int i = 5; i * i <= number; i += 6)
  {
    if (number % i == 0 || number % (i + 2) == 0)
      return false;
  }

  // If no divisors are found, the number is prime
  return true;
}
void CopyArray(int arr[100], int arr2[100], int arrLength,int &newLength)
{
  int index = 0;
  for (int i = 0; i < arrLength; i++)
  {
    if (isPrime(arr[i]))
      arr2[index++] = arr[i];
  }
  newLength = index;
}
void PrintArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << arr[i] << " ";
  cout << "\n";
}
int main()
{
  srand((unsigned)time(NULL));
  int arr[100], arr2[100], arrLength,newLength;
  ReadRandomArray(arr, arrLength);
  CopyArray(arr, arr2, arrLength,newLength);
  cout
      << "\nThe copy array: ";
  PrintArray(arr, arrLength);
    cout
      << "\nThe copy array: ";
  PrintArray(arr2, newLength);
  return 0;
}