#include <iostream>
using namespace std;

string rev_str(string str)
{
  string temp_str = str;
  for (int i = str.length(); i >= 0; i--)
  {
    str[str.length() - i] = temp_str[i - 1];
  }
  return str;
}

int main()
{
  string inputStr;
  cout << "Enter a string" << endl;
  cin >> inputStr;
  cout << "Reversed order:" << rev_str(inputStr) << endl;
}
