#include <clocale>
#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");

  bool found = false;
  int n, a, i = 1;

  cin >> n;

  while (i <= n && !found) {
    cin >> a;
    if (a == 0) {
      i += 1;
    } else {
      found = true;
    }
  }

  if (found) {
    if (a > 0) {
      cout << "Positive numbers appeared earlier" << endl;
    } else {
      cout << "Negative numbers appeared earlier" << endl;
    }
  } else {
    cout << "All numbers are zero" << endl;
  }

  return 0;
}