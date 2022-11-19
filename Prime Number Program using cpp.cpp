#include <iostream>

using namespace std;

int
main ()
{
  int temp, temp2, User;
  cout << "Enter you number";
  cin >> User;

  temp = User % 3;
  temp2 = temp % 2;

  if (temp2 != 0)
    {
      cout << "is Prime Number";
    }
  else
    {
      cout << "is not Prime Number";

    }

  return 0;
}
