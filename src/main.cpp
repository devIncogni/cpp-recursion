
#include <iostream>
#include <string_view>
void printName(std::string_view name, int times) {
  if (times <= 0) {
    return;
  } else {
    std::cout << name << '\n';
    printName(name, times - 1);
    return;
  }
}

void printUpto(int N) {
  if (N <= 0) {
    return;
  } else {
    printUpto(N - 1);
    std::cout << N << '\n';
  }
}

void printFrom(int N) {
  if (N <= 0) {
    return;
  } else {
    std::cout << N << '\n';
    printFrom(N - 1);
  }
}

int main() {

  printName("Arin", 5);
  printUpto(10);
  printFrom(10);
  return 0;
}
