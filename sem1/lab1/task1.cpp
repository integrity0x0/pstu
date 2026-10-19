#include <iomanip>
#include <iostream>

int main() {
  constexpr float fA = 1000.0f, fB = 0.0001f;
  constexpr double dA = 1000.0, dB = 0.0001;

  std::cout << std::setprecision(7);

  std::cout << "--- float ---\n";

  float fDiff = fA - fB;
  std::cout << "a - b = " << fDiff << "\n";

  float fDiffSqr = fDiff * fDiff;
  std::cout << "(a - b)^2 = " << fDiffSqr << "\n";

  float fASqr = fA * fA;
  std::cout << "a^2 = " << fASqr << "\n";

  float fTwoAB = 2 * fA * fB;
  std::cout << "2ab = " << fTwoAB << "\n";

  float fRightPart = fASqr - fTwoAB;
  std::cout << "a^2 - 2ab = " << fRightPart << "\n";

  float fNumerator = fDiffSqr - fRightPart;
  std::cout << "numerator = " << fNumerator << "\n";

  float fDenominator = fB * fB;
  std::cout << "b^2 = " << fDenominator << "\n";

  float fResult = fNumerator / fDenominator;
  std::cout << "result = " << fResult << "\n";

  std::cout << "\n--- double ---\n";

  double dDiff = dA - dB;
  std::cout << "a - b = " << dDiff << "\n";

  double dDiffSqr = dDiff * dDiff;
  std::cout << "(a - b)^2 = " << dDiffSqr << "\n";

  double dASqr = dA * dA;
  std::cout << "a^2 = " << dASqr << "\n";

  double dTwoAB = 2 * dA * dB;
  std::cout << "2ab = " << dTwoAB << "\n";

  double dRightPart = dASqr - dTwoAB;
  std::cout << "a^2 - 2ab = " << dRightPart << "\n";

  double dNumerator = dDiffSqr - dRightPart;
  std::cout << "numerator = " << dNumerator << "\n";

  double dDenominator = dB * dB;
  std::cout << "b^2 = " << dDenominator << "\n";

  double dResult = dNumerator / dDenominator;
  std::cout << "result = " << dResult << "\n";

  return 0;
}