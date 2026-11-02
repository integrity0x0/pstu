#include <clocale>
#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");

  bool isUnordered = false;
  int a, b;

  cin >> a;

  if (a != 0) {
    cin >> b;
    while (b != 0 && !isUnordered) {
      if (b > a) {
        a = b;
      } else {
        isUnordered = true;
      }
      cin >> b;
    }

    if (isUnordered) {
      cout << "Sequence is not ordered" << endl;
    } else {
      cout << "Sequence is ordered" << endl;
    }
  }

  return 0;
}