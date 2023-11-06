//Design a PDA to accept WCWR where w is any string and WR is reverse of that string and C is a Special symbol.
#include <iostream>
using namespace std;

int main()
{
  string s;
  cin >> s;
  bool torf = true;
  int j = s.length() - 1;
  if (s.length() % 2 != 0)
  {
    for (int i = 0; i < (s.length() / 2); i++)
    {
      if (s[i] != s[j])
      {
        torf = false;
        break;
      }
      j--;
    }
    if (torf)
      cout << "Accepted" << endl;
    else
      cout << "Rejected" << endl;
  }
  else
  {
    cout << "Rejected" << endl;
  }
  return 0;
}
