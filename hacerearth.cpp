#include<iostream>
using namespace std;
#include <iostream>
#include <string>

void swapAdjacentChars(std::string& str) {
  for (size_t i = 0; i < str.length() - 1; i += 2) {
    char temp = str[i];
    str[i] = str[i + 1];
    str[i + 1] = temp;
  }
}

int main() {
  std::string originalStr = "hello";
  std::cout << "Original string: " << originalStr << std::endl;

  swapAdjacentChars(originalStr);
  std::cout << "New string: " << originalStr << std::endl;

  return 0;
}