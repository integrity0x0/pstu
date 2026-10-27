#include <iostream>

int main() {
  constexpr float kE = 1e-4;

  float a = 3.0f / 6.0f;  // a_1 = 3 ^ 1 * 1!/ 3!
  float sum = 0.0f;

  for (size_t n = 1; a >= kE; ++n) {
    sum += a;
    a /=
        static_cast<float>((3 * n + 1) * (3 * n + 2));  // a(n+1) = a(n) / (3 * n + 1) * (3 * n + 2)
  }

  std::cout << "sum: " << sum << "\n";
}


