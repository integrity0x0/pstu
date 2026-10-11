#include <iomanip>
#include <iostream>

template <typename T>
[[nodiscard]] constexpr T Sqr(T x) {
  return x * x;
}

template <typename T>
[[nodiscard]] constexpr T Formula(T a, T b) {
  const T diff = a - b;              // a - b
  const T diffSqr = Sqr(diff);       // (a - b)^2
  const T aSqr = Sqr(a);             // a^2
  const T twoAB = 2 * a * b;         // 2ab
  const T rightPart = aSqr - twoAB;  // a^2 - 2ab
  const T numerator = diffSqr - rightPart;
  const T denominator = Sqr(b);  // b^2
  return numerator / denominator;
}

int main() {
  constexpr float fA = 1000.0f;
  constexpr float fB = 0.0001f;

  constexpr double dA = 1000.0;
  constexpr double dB = 0.0001;

  std::cout << std::setprecision(10);
  std::cout << "float:  " << Formula(fA, fB) << "\n";
  std::cout << "double: " << Formula(dA, dB) << "\n";
}