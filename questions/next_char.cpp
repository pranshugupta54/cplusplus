// Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a).
// Example:
// Sample Input: w3resource
// Sample Output: x3sftpvsdf

#include <iostream>
using namespace std;
// a = 97, z = 122
// A = 65, Z = 90
char nxt_chr(char a){
  int ch = int(a);

  if (ch > 90 && ch < 97){
    return char(ch);
  } else if (ch > 64 && ch <123){ // to convert only alphabets and not numbers
    return char(ch+1);
  } else{
    return char(ch);
  }
}

int main(){
  string str;
  cout << "Enter a string" << endl;
  cin >> str;
  for (int i = 0; i < str.length(); i++)
  {
    cout << nxt_chr(str[i]);
  }  
  cout << endl;
}
