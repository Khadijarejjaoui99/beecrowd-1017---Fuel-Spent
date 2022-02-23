// Solution of 1017 - Fuel Spent in beecrowd
#include <iostream>
#include <iomanip>


using namespace std;

int main ()
{
  int t, v, d;
  cin >> t >> v;
  d = v * t;
  cout << fixed << setprecision(3) << d/12.0 << endl;

  system("pause");
  return 0;
}