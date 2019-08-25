#include <string>
using namespace std;
#include <ctype.h>


bool isPalindrom (const std::string& str)
{
  int n=str.length();    //How long is a word?
  string strin=str;      //We need to change upper letter to lower letter.
  char strin3[10];      //the array that will help us
  string strin2="";    //Oue second string
  for(int k=0;k<n;k++){  //Let`s turn the capital letter to lower letter
    strin[k]=tolower(strin[k]);  //The process has begun.
    strin3[(n-k-1)]=strin[k];    //Also, we reverse the word!
  }
  for(int k=0;k<n;k++){ //Copy the reversed array!
    strin2+=strin3[k];
  }
  if(strin2==strin){ //And final. Let`s check if our words are equal!
    return true;}
  else{
    return false;}
}  //P.S.:Made by d9nchik https://github.com/d9nchik
