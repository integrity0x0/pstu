#include <cmath>
#include <iostream>

int main() {
  constexpr double kE = 0.0001, kA = 0.2, kB = 1.0;
  constexpr size_t kN = 10, kSteps = 10;
  constexpr double kStride = (kB - kA) / kSteps;

  for (size_t i = 0; i <= kSteps; ++i) {
    double x = kA + i * kStride;
    double t = (x - 1) / (x + 1);
    double t2 = t * t;

    double sn = 0;
    double p = t;
    for (size_t k = 0; k <= kN; ++k) {
      sn += p / (2 * k + 1);
      p *= t2;
    }

    double se = 0;
    p = t;
    size_t k = 0;
    double term = p;
    while (std::fabs(term) >= kE) {
      se += term;
      ++k;
      p *= t2;
      term = p / (2 * k + 1);
    }

    double y = 0.5 * std::log(x);
    std::cout << "X=" << x << "\tSN=" << sn << "\tSE=" << se << "\tY=" << y << "\n";
  }
  return 0;
}
