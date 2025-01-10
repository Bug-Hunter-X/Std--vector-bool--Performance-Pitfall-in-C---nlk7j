#include <iostream>
#include <vector>
#include <bitset>

int main() {
  // Inefficient approach
  std::vector<bool> boolVector(1000000);
  for (int i = 0; i < 1000000; ++i) {
    boolVector[i] = (i % 2 == 0);
  }
  bool value = boolVector[500000];

  // Efficient approach
  std::bitset<1000000> bitsetVector;
  for (int i = 0; i < 1000000; ++i) {
    bitsetVector[i] = (i % 2 == 0);
  }
  bool bitsetValue = bitsetVector[500000];
  return 0;
}
