#include <iostream>

#include "sosimians.h"

int main(void) {
  std::cout << "First Test Starting..." << std::endl;
  int result = sum(1, 2);
  if (result == 3) {
    return 0;
  } else {
    return -1;
  }
}
