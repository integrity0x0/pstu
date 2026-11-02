#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  constexpr size_t kMaxSize = 100, kAdded = 3;
  constexpr int kLow = -10, kHigh = 30;

  int a[kMaxSize + kAdded];
  size_t n = 0;

  std::cout << "Enter array size (1.." << kMaxSize << "): ";
  std::cin >> n;

  for (size_t i = 0; i < n; ++i) {
    a[i] = std::rand() % (kHigh - kLow + 1) + kLow;
  }

  std::cout << "Source array:\n";
  for (size_t i = 0; i < n; ++i) {
    std::cout << a[i] << " ";
  }
  std::cout << "\n";

  int minValue = a[0];
  for (size_t i = 1; i < n; ++i) {
    minValue = std::min(minValue, a[i]);
  }

  size_t m = 0;
  for (size_t i = 0; i < n; ++i) {
    if (a[i] != minValue) {
      a[m++] = a[i];
    }
  }

  std::cout << "Min = " << minValue << ", removed: " << n - m << "\n";
  n = m;

  double sum = 0;
  for (size_t i = 0; i < n; ++i) {
    sum += a[i];
  }

  double mean = sum / n;
  int avg = static_cast<int>(std::lround(mean));

  std::cout << "Mean = " << mean << ", rounded = " << avg << "\n";

  for (size_t i = n; i > 0; --i) {
    a[i - 1 + kAdded] = a[i - 1];
  }

  for (size_t i = 0; i < kAdded; ++i) {
    a[i] = avg;
  }
  n += kAdded;

  std::cout << "Final array:\n";
  for (size_t i = 0; i < n; ++i) {
    std::cout << a[i] << " ";
  }
  std::cout << "\n";
}






