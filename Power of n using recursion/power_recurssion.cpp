#include<iostream>
using namespace std;

int
powerRecursion (int base, int power)
{
  if (power != 0)
    {
      return (base * powerRecursion (base, power - 1));
    }
  else
    {
      return 1;
    }
}

int
main ()
{
  int a, b;
  cout << "enter base and power ";
  cin >> a >> b;
  int ans = powerRecursion (a, b);
  cout << " answer is :: " << ans;
  return 0;
}
