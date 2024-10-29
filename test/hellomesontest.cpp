#include "hellomeson.h"
#include <iostream>

int main()
{
   std::cout << "Testing hellomeson..." << std::endl;
   auto hello = std::make_unique<hellomesonlib::hellomeson>();
   std::cout << "hellomeson::getHello() = " << hello->getHello() << std::endl;
   std::cout << "hellomeson::getWorld() = " << hello->getWorld() << std::endl;
   return 0;
}