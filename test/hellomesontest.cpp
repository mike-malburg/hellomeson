#include <iostream>
#include "hellomeson.h"
#include "osmacros.h"

int main() {
   std::cout << "Testing hellomeson..." << std::endl;
   const auto hello = std::make_unique<hellomesonlib::hellomeson>();
   std::cout << "hellomeson::getHello() = " << hello->getHello() << std::endl;
   std::cout << "hellomeson::getWorld() = " << hello->getWorld() << std::endl;

   std::cout << std::endl;
   std::cout << "Printing OSVersion definitions..." << std::endl;
   osmacros::print();
   return 0;
}