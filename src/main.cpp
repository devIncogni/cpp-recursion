
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
int main() {

  printName("Arin", 5);
  return 0;
}
