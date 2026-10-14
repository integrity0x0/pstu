#include <iomanip>
#include <iostream>

template <typename T>
[[nodiscard]] constexpr T Sqr(T x) {
  return x * x;
}

template <typename T>
[[nodiscard]] constexpr T Formula(T a, T b) {
  T diff = a - b;
  std::cout << "a - b = " << diff << "\n";

  T diffSqr = Sqr(diff);
  std::cout << "(a - b)^2 = " << diffSqr << "\n";

  T aSqr = Sqr(a);
  std::cout << "a^2 = " << aSqr << "\n";

  T twoAB = 2 * a * b;
  std::cout << "2ab = " << twoAB << "\n";

  T rightPart = aSqr - twoAB;
  std::cout << "a^2 - 2ab = " << rightPart << "\n";

  T numerator = diffSqr - rightPart;
  std::cout << "numerator = " << numerator << "\n";

  T denominator = Sqr(b);
  std::cout << "b^2 = " << denominator << "\n";

  T result = numerator / denominator;
  std::cout << "result = " << result << "\n";

  return result;
}

int main() {
  constexpr float fA = 1000.0f, fB = 0.0001f;
  constexpr double dA = 1000.0, dB = 0.0001;

  std::cout << std::setprecision(7);

  std::cout << "--- float ---\n";
  Formula(fA, fB);

  std::cout << "\n--- double ---\n";
  Formula(dA, dB);

  return 0;
}

