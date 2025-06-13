
#include <iostream>
#include <string_view>
#include <vector>
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

int sumUpto(int N) {
  if (N == 0) {
    return 0;
  } else {
    return N + sumUpto(N - 1);
  }
}

int factorial(int N) {
  if (N <= 1) {
    return 1;
  } else {
    return N * factorial(N - 1);
  }
}

void reverseArray(std::vector<int> &v, int start, int end) {
  if (start >= end) {
    return;
  } else {
    int temp = v[start];
    v[start] = v[end];
    v[end] = temp;
    reverseArray(v, start + 1, end - 1);
  }
}

std::vector<int> fibonacci(int NthTerm) {
  std::vector<int> fiboSeq;
  if (NthTerm == 0) {
    return {0};
  } else if (NthTerm == 1) {
    return {0, 1};
  } else {
    fiboSeq = fibonacci(NthTerm - 1);
    fiboSeq.push_back(fiboSeq[fiboSeq.size() - 1] +
                      fiboSeq[fiboSeq.size() - 2]);
    return fiboSeq;
  }
}

int main() {

  printName("Arin", 5);
  printUpto(10);
  printFrom(10);
  std::cout << sumUpto(10) << '\n';
  std::cout << factorial(5) << '\n';

  std::vector<int> v = {1, 2, 3, 4, 5, 6, 7};
  reverseArray(v, 0, v.size() - 1);
  v.push_back(1);
  for (int i : v) {
    std::cout << i;
  }
  std::cout << '\n';

  v = fibonacci(10);
  for (int i : v) {
    std::cout << i << ' ';
  }

  return 0;
}
