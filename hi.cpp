#include <iostream>

using namespace std;
enum enAge
{
  Allowed = 21,
  Not=20
};
enum enHaveLicense
{
  Have = true,
  NotHave = false
};
enAge ReadCheckAge()
{
  int age;
  cout << "Write your Age : ";
  cin >> age;
  if (age>=enAge::Allowed)
  {
    return enAge::Allowed;
  }
  else{
    return enAge::Not;
  }

 }
enHaveLicense ReadCheckLicense()
{
  int license;
  cout << "Write if you have a license 1 or any thing for not : ";
  cin >> license;
  if (license==enHaveLicense::Have)
  {
    return enHaveLicense::Have;
  }
  else
  {
    return enHaveLicense::NotHave;
  }
 }
string CheckHire(enAge age,enHaveLicense license)
{
  if(age>=enAge::Allowed&&license==enHaveLicense::Have){
    return "have a license";
  }
  else{
     return "not have a license";
  }
}
 void PrintHire( string avability){
  
   cout << "You is " << avability << endl;
 }
 int main()
 {
   PrintHire(CheckHire(ReadCheckAge(),ReadCheckLicense()));
   return 0;
 }