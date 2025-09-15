// Cpp Code calling C function
#include <iostream>

extern "C" {
  void greet_from_c();
}

int main() {
   std::cout << "SalamAleykoum, Hello fron C Language \n";
   greet_from_c(); // Call the function

  return 0;
}
