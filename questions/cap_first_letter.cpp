// Write a C++ program to capitalize the first letter of each word of a given string. Words must be separated by only one space.
// Example:
// Sample Input: cpp string exercises
// Sample Output: Cpp String Exercises

#include <iostream>
using namespace std;

// text = cpp is cool
// length = 11
// index to cap: 0, 4, 7

string Capitalize_first_letter(string text){
  string str = text;
  str[0] = toupper(str[0]); 
  for (int i = 1; i < text.length(); i++)
  {
    if (str[i] == ' ')
    {
      str[i+1] = toupper(str[i+1]);
    }
  }
  return str;
}

int main(){
  string str;
  cout << "Enter a string" << endl;
  getline(cin, str);
  cout << Capitalize_first_letter(str) << endl;
}
