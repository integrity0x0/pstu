#include <iostream>	
#include <stdint.h>

int main() {
  int32_t m = 6, n = 7;
  std::cout << "start: m = " << m << ", n = " << n << "\n";

  int32_t first = m - ++n;
  std::cout << "first = m - ++n = " << first << "  (m = " << m << ", n = " << n << ")\n";

  int32_t second = ++m > -n;
  std::cout << "second = ++m > -n = " << second << "  (m = " << m << ", n = " << n << ")\n";

  int32_t third = --n < ++m;
  std::cout << "third = --n < ++m = " << third << "  (m = " << m << ", n = " << n << ")\n";

  return 0;
}

